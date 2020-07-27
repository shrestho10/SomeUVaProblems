#include<stdio.h>

int main()
{ int n,p,s,k,t;
    printf("\n\nwelcome to Mithila Complex\n");
    printf("\nPress 1 for Nescafe");
    printf("\nPress 2 for Dark Fantacy");








    printf("\nPress 3 for Noodles");
    printf("\nPress 4 for Lays");
    printf("\nPress 5 for Biscuit");
    printf("\nPress 6 for Tea");
    printf("\nPlease enter your choice");
    scanf("%d",&n);
    if(n==1)
    {
        printf("\nnescafe is 25 BDT per packate\n\nplease enter how many packets do you want");
        scanf("%d",&p );
        s=p*25;
        printf("\ntotal taka of nescafe = %d",s);
    }
printf("\ndo you want to buy anything else");
scanf("%d",&n);
if(n==2)
    {
        printf("\ndark fantasy is 100 BDT per packate\n\nplease enter how many packets do you want");
        scanf("%d",&p );
        k=p*100;
        printf("\ntotal taka of dark fantasy %d",k);
    }
    printf("\n\ndo you want to buy anything else\n if not then press 0");
    scanf("%d",&n);
if(n==0)
    {
        t=s+k;
        printf("\n\nrtotal taka ++ %d",t);
    }






























































































































































}
