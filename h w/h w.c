#include<stdio.h>

int main()
{
    int n,count;
    while(scanf("%d",&n))
    {  count=0;
        if(n==2)
        {
            printf("1");
        }
        else
        {
            while(n>=2)
            {
                n=n/2;
                count++;
            }
        }
        printf("%d\n",count+1);
    }

}
