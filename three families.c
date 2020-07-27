#include<stdio.h>


int main()
{
    int t,a,b,c,i,f,d,e,g,h;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        d=a+b;

        e=d/3;

        f=a-e;


        g=b-e;



        h=(c*f)/(f+g);

        printf("%d\n",h);

    }

return 0;

}
