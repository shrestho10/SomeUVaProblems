#include<stdio.h>
int main()
{
long int count,add,num,r,t,i,j,d,k;
while(scanf("%ld",&t)==1)
{
for(i=0;i<t;i++)
    {
    scanf("%ld",&num);
    count=0;
    r=0;
    for(j=num;j!=0;j=j/10)
        {
        d=j%10;
        r=r*10+d;
        }
    if(num!=r)
        for(k=0;k<1000;k++)
        {
        add=num+r;
        count++;
        r=0;
        num=add;
        for(j=num;j!=0;j=j/10)
            {
            d=j%10;
            r=r*10+d;
            }
        if(num==r)    break;
        }
    printf("%ld %ld\n",count,num);

    }
}
return 0;
}
