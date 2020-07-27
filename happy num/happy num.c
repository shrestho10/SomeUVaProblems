#include<stdio.h>
int main()
{
int n;
int sum=0;
scanf("%d",&n);
int p=n;
int c;
while(sum!=p||sum!=1)
 { sum=0;
while(n>0)
{
    c=n%10;
    sum=sum+c*c;
    n=n/10;
}
n=sum;

}
if(sum==p)
{
    printf("unhappy");
}
else
{
    printf("happy");
}
}
