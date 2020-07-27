#include<stdio.h>

int main()
{int p;
scanf("%d",&p);
while(p>=1)
{


int n;
scanf("%d",&n);
int a[100];
int i;
for(i=1;i<=n;i++)
{
    scanf("%d",&a[i]);
}


int j,k;
for(i=1;i<=n;i++)
{
    for(j=i+1;j<=n;j++)
    {
        if(a[i]>a[j])
        {
            k=a[i];
            a[i]=a[j];
            a[j]=k;
        }
    }
}

int sum=0;
for(i=n;i>1;i--)
{
    sum=sum+a[i]-a[i-1];
}
printf("%d\n",sum*2);
p--;
}
}
