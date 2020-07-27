#include<stdio.h>

int main()
{
    int a,k,b,i,j=0,sum=0;
    while(scanf("%d %d",&a,&b)==2)
    {  sum=0;
         int c=a;
    int d=b;
        if(a>b)
        {
            int l=a;
            a=b;
            b=l;
        }


    for(i=a;i<=b;i++)
    { j=1;
    k=i;
            while(k>1)
                  {


            if(k%2!=0)
            {
                k=3*k+1;
            }
            else
            {
                k=k/2;
            }
            j++;

                  }
                  if(sum<j)
                  {
                      sum=j;
                  }

    }

    printf("%d %d %d\n",c,d,sum);
}
}
