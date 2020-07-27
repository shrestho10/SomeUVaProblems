#include<stdio.h>
int main()
{
    int c2,c1;
    long a,b,c;

    scanf("%d",&c2);
    if(c2>0 && c2<20)
    {
        for(c1=1; c1<=c2; c1++)
        {
            scanf("%ld %ld %ld",&a,&b,&c);
            if(a+b>c && b+c>a && c+a>b)
            {
                if(a==b && b==c)
                {
                    printf("Case %d: Equilateral\n",c1);
                }
                else if(a==b||b==c||a==c)
                {
                    printf("Case %d: Isosceles\n",c1);
                }
                else if(a!=b||b!=c||c!=a)
                {
                    printf("Case %d: Scalene\n",c1);
                }
            }
            else
            {
                printf("Case %d: Invalid\n",c1);
            }
        }

    }
    return 0;
}
