#include<stdio.h>
int main()
{
    int t;
    int k=1;
    scanf("%d",&t);
    while(t>0)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a==20||b==20||c==20)
        {
            printf("Case %d: good\n",k);
        }
        else
        {
            printf("Case %d: bad\n",k);
        }
        k++;
        t--;
    }
}
