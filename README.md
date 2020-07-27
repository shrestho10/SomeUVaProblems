# SomeUVaProblems-Shagoto Rahman
1.100 - The 3n + 1 problem
#include<stdio.h>
int main(){
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
                  { if(k%2!=0)
            {
                k=3*k+1;
            }else
            {  k=k/2;
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
2. 11172 - Relational Operator
# include<stdio.h>
int main()
{
int a,b,c,i;
while(scanf("%d",&a)==1)
{
for(i=0;i<a;i++)
    {
    scanf("%d%d",&b,&c);
    if(b>c)
    printf(">\n");
    else if(b<c)
    printf("<\n");
    else
    printf("=\n");
    }
}
return 0;
}
3. 11727 - Cost Cutting

#include<stdio.h>
int main()
{
int a,b,c,d,ans,j;
while(scanf("%d",&d)==1)
{
for(j=1;j<=d;j++)
 {
 scanf("%d%d%d",&a,&b,&c);
 if(a>b && b>c || a<b && b<c)
 ans=b;
 if(a>c && c>b || a<c && c<b)
 ans=c;
 if(b>a && a>c || b<a && a<c)
 ans=a;
 printf("Case %d: %d\n",j,ans);
 }
}
return 0;
}
4. 11364 - Parking
#include <stdio.h>
int main()
{
    int t, n, p,i, max,min,d;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        max=0;
        min=50000;
        for (i=0;i<n;i++)
        {
            scanf("%d",&p);
            if (max<p) max=p;
            if (min>p) min=p;
        }
        d=(max-min)*2;
        printf("%d\n",d);
    }
    return 0;
}
5. 12289 - One-Two-Three
# include <stdio.h>
# include <string.h>
int main()
{
   int n;
   char a[100],chr;
 scanf("%d%c",&n,&chr);
while(n--)
{
 gets(a);
  if(strlen(a)==5)
  printf("3\n");
  else if((a[0]=='o' && a[1]=='n')||
          (a[0]=='o' && a[1]=='e')||
          (a[1]=='n' && a[2]=='e')||
          (a[0]=='o' && a[2]=='e')||
          (a[0]=='o' && a[2]=='n'))
  printf("1\n");
  else
  printf("2\n");
}
 return 0;
}
6. 1124 - Celebrity jeopardy
#include <stdio.h>
int main()
{
    char a[100];
    while(gets(a))
    puts(a);
    return 0;
}
7. 11547 - Automatic Answer
#include<stdio.h>
int main()
{
int t,i,n,ans,a,m;
while(scanf("%d",&t)==1)
{
i=1;
while(i<=t)
 {
 scanf("%d",&n);
 a=n*315+36962;
 m=a/10;
 ans=m%10;
 if(ans<0)
 ans=ans/(-1);
 printf("%d\n",ans);
 i++;
 }
}
return 0;
}
8. 10055 - Hashmat the Brave Warrior
#include<stdio.h>
int main()
{
long long int a,b,c;
while(scanf("%lld%lld",&a,&b)==2)
{
if(a>b)
c=a-b;
else
c=b-a;
printf("%lld\n",c);
}
return 0;
}
9. 12577 - Hajj-e-Akbar
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int no=0;
    while(scanf("%s",s))
    {
        if(!strcmp(s,"*"))
        break;
        else if(!strcmp(s,"Hajj"))
        printf("Case %d: Hajj-e-Akbar\n",++no);
        else
        printf("Case %d: Hajj-e-Asghar\n",++no);
    }
    return 0;
}
10. 10071 - Back to High School Physics
#include<stdio.h>
int main()
{
 int v,t;
 while (scanf("%d %d",&v,&t)==2)
 {
  if ((v>=-100)&&(v<=100)&&(t>=0)&&(t<=200))
   printf("%d\n",2*v*t);
 }
 return 0;
}
11. 12468 - Zapping
#include<stdio.h>
int main()
{
    int n,m,sum,u1,u2,u,d;
    while(scanf("%d %d",&n,&m)==2)
    {
        if(n<0 && m<0)
            break;
        if(n>m)
        {
           d =n-m;
        }
        else
        {
            d=m-n;
        }
 if(d>=50)
            d = 100-d;
       printf("%d\n",d);
    }
return 0;
}
12. 11636 - Hello World!
#include<stdio.h>
#include<math.h>
int main()
{
int a,b,i,j=1;
while(scanf("%d",&a)==1 && (a>=0))
{
if(a==1)
printf("Case %d: 0\n",j);
for(i=0;i<14;i++)
if(pow(2,i)<a && a<=pow(2,i+1))
printf("Case %d: %d\n",j,i+1);
j++;
} 
return 0;
}
13. 11936 - The Lazy Lumberjacks
#include<stdio.h>
int main()
{
int a,b,c,i,t;
while(scanf("%d",&t)==1)
{
for(i=0;i<t;i++)
 {
 scanf("%d%d%d",&a,&b,&c);
 if(a+b<=c || b+c<=a || a+c<=b)
 printf("Wrong!!\n");
 else
 printf("OK\n");
 }
}
return 0;
}
14. 1585 - Score
#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    int a[101],b,c,d,i,j,k,l,n,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",s);
        l=strlen(s);
        for(j=0;j<l;j++)
        {
            if(s[j]=='O')
            a[j]=1;
            else if(s[j]='X')
            a[j]=0;
        }
        c=0,sum=0;
    for(k=0;k<l;k++)
    {
            if(a[k]==1)
            {
                c++;
            }
            if(a[k]==0)
            {
                c=0;
            }
            sum=sum+c;
    }
        printf("%d\n",sum);
  }
  return 0;
}
15. 575 - Skew Binary
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
long int n,i,sum,num,b;
char s[100];
while(gets(s))
{
sum=0;
n=strlen(s);
for(i=0;i<n;i++)
    {
    num=s[i]-'0';
    b=num*(pow(2,n-i)-1);
    sum=sum+b;
    }
if(sum==0)    break;
printf("%ld\n",sum);
}
return 0;
}
16.494 - Kindergarten Counting Game.
#include<stdio.h>
int main() {
 char s[1001];
 while(gets(s)) {
  int i, t = 0, count = 0;
  for(i = 0; s[i]; i++) {
   if((s[i] >= 'A' && s[i] <= 'Z') || 
    (s[i] >= 'a' && s[i] <= 'z'))
     t = 1;
   else {
    count += t;
    t = 0;
   }
  }
  count += t;
  printf("%d\n", count);
 }
    return 0;
}
17. 10018 - Reverse and Add
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
18. 382 - Perfection
#include<stdio.h>
#include<string.h>
int main()
{
long long i,t,sum,j,a[100000];
t=0;
while(t<=100000)
{
scanf("%lld",&a[t]);
if(a[t]==0)    break;
t++;
}
printf("PERFECTION OUTPUT\n");
for(i=0;i<t;i++)
    {
    sum=0;
    if(a[i]<10)
    printf("    ");
    else if(a[i]<100)
    printf("   ");
    else if(a[i]<1000)
    printf("  ");
    else if(a[i]<10000)
    printf(" ");
    printf("%lld  ",a[i]);
    for(j=1;j<=a[i]/2;j++)
        {
        if(a[i]%j==0)
        sum=sum+j;
        }
    
    if(a[i]==sum)
    printf("PERFECT\n");
    else if(a[i]>sum)
    printf("DEFICIENT\n");
    else if(a[i]<sum)
    printf("ABUNDANT\n");
    }
printf("END OF OUTPUT\n");
return 0;
}
19. 11764 - Jumping Mario
#include<stdio.h>
int main()
{
int n,i,j,k,h,l,a,b[50];
while(scanf("%d",&a)==1)
{
for(j=1;j<=a;j++)
 {
 h=0;
 l=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&b[i]);
 for(i=1;i<n;i++)
  {if(b[i]>b[i-1])
   h=h+1;
   if(b[i-1]>b[i])
   l=l+1;}
 printf("Case %d: %d %d\n",j,h,l);
 }
}
return 0;
}
20. 10970 - Big Chocolate
#include<stdio.h>
int main()
{
int m,n,c;
while(scanf("%d%d",&m,&n)==2)
printf("%d\n",m*n-1);
return 0;
}
21. 12646 - Zero or One
#include<stdio.h>
int main()
{ int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if((a==1&&b==1&&c==1)||(a==0&&b==0&&c==0))
           {
               printf("*\n");
           }
        else if((a==1&&b==1&&c==0)||(a==0&&b==0&&c==1))
            {
                printf("C\n");
            }
        else if((a==1&&c==1&&b==0)||(a==0&&c==0&&b==1))
            {
                printf("B\n");
            }
        else if((c==1&&b==1&&a==0)||(c==0&&b==0&&a==1))
            {
                printf("A\n");
            }
    }
}
22. 12704 - Little Masters
#include<stdio.h>
#include<math.h>
int main()
{
int T,x,y,r,i;
float X,Y,length;
scanf("%d",&T);
for(i=1;i<=T;i++)
{
scanf("%d %d %d",&x,&y,&r);
length=sqrt(pow(x,2)+pow(y,2));
X=r-length;
Y=r+length;
printf("%.2f %.2f\n",X,Y);
}
return 0;
}
23. 10696 - f91
#include<stdio.h>
int main()
{
int a,b;
while(scanf("%d",&a)==1 && a!=0)
{if(a>100)
b=a-10;
else
b=91;
printf("f91(%d) = %d\n",a,b);}
return 0;
}
24. 10921 - Find the Telephone
#include<stdio.h>
#include<string.h>

int main()
{
char c[40];
int i,a;
    while(scanf("%s",&c)==1)
    {
        a=strlen(c);
        for(i=0;i<a;i++)
        {
            switch(c[i])
            {    
                 case 'A': {printf("2");break;}
                 case 'B': {printf("2");break;}
                 case 'C': {printf("2");break;}
                 case 'D': {printf("3");break;}
                 case 'E': {printf("3");break;}
                 case 'F': {printf("3");break;}
                 case 'G': {printf("4");break;}
                 case 'H': {printf("4");break;}
                 case 'I': {printf("4");break;}
                 case 'J': {printf("5");break;}
                 case 'K': {printf("5");break;}
                 case 'L': {printf("5");break;}
                 case 'M': {printf("6");break;}
                 case 'N': {printf("6");break;}
                 case 'O': {printf("6");break;}
                 case 'P': {printf("7");break;}
                 case 'Q': {printf("7");break;}
                 case 'R': {printf("7");break;}
                 case 'S': {printf("7");break;}
                 case 'T': {printf("8");break;}
                 case 'U': {printf("8");break;}
                 case 'V': {printf("8");break;}
                 case 'W': {printf("9");break;}
                 case 'X': {printf("9");break;}
                 case 'Y': {printf("9");break;}
                 case 'Z': {printf("9"); break;}
                 default: {printf("%c",c[i]);break;}
            }           
        }
        printf("\n");
    }
    return 0;
}
25. 10035 - Primary Arithmetic
#include<stdio.h>
int main()
{
    unsigned long long a,b;
    int i,m,n,carry,count,sum;
    while(scanf("%llu%llu",&a,&b)==2)
    {
        if(a==0 && b==0)
            break ;
        m=0;
        n=0;
        count=0;
        carry=0;
        for(i=0;; i++)
        {
            if(a==0&&b==0)
                break;
            m=a%10;
            a=a/10;
            n=b%10;
            b=b/10;
            sum=n+m+carry;
            if(sum>9)
            {
                count++;
                carry=1;
            }
            else
            {
                carry=0;
            }
        }
        if(count==1)
        {
          printf("%d carry operation.\n",count);
        }
        else if(count>1)
        {
            printf("%d carry operations.\n",count);
        }
        else if(count==0)
        {
            printf("No carry operation.\n");
        }

    }
return 0;
}
26. 11185 - Ternary
#include<stdio.h>
int main()
{
    long int ch[100],a,b,c,i,j,l=0;
    while(scanf("%ld",&a)==1)
    {
        if(a<0)
            break;
        for(i=0 ; ; i++)
        {

            b=a%3;
            ch[i]=b;
            a=a/3;
            if(a==0)
                break;
        }
        for(j=i; j>=0; j--)
        {
            printf("%ld",ch[j]);
        }
        printf("\n");

    }
    return 0;
}
27. 11530 - SMS Typing
#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,count,q;
    char s[100];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {

        gets(s);
       count=0;

        for(j=0;s[j]!='\0';j++)
        {
            if(s[j]=='a'||s[j]=='d'||s[j]=='g'||s[j]=='j'||s[j]=='m'||s[j]=='p'||s[j]=='w'||s[j]=='t'||s[j]==' ')
            {
                 count=count+1;
            }

            else if(s[j]=='b'||s[j]=='e'||s[j]=='h'||s[j]=='k'||s[j]=='n'||s[j]=='q'||s[j]=='u'||s[j]=='x')
            {
                count=count+2;
            }
            else if(s[j]=='c'||s[j]=='f'||s[j]=='i'||s[j]=='l'||s[j]=='o'||s[j]=='r'||s[j]=='v'||s[j]=='y')
            {                count=count+3;
            }
            else if(s[j]=='s'||s[j]=='z')
            {
                count=count+4;
            }
}
        printf("Case #%d: %d\n",i+1,count);
    }
}
28. 12502 - Three Families
#include <stdio.h>

int main () {
    int x,y,z,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d", &x,&y,&z);
        printf("%d\n",z*(2*x-y)/(x+y));
    }
    return 0;
}
29. 11417 - GCD
#include<stdio.h>
int main()
{
int N;
while(scanf("%d",&N)==1)
{
if(N==0)
    break;
int G=0,i,j;
for(i=1;i<N;i++)
{
for(j=i+1;j<=N;j++)
{
G+=GCD(i,j);
}
}
printf("%d\n",G);
}
return 0;
}
int GCD(int a,int b)
{
    if(b==0)
        return a;
    return GCD(b,a%b);
}
30. 694 - The Collatz Sequence
#include<stdio.h>
int main()
{
long long a,b,c,i,j=1;
while(scanf("%lld%lld",&b,&c)==2)
{
if(b<0 && c<0)
break;
a=b;
for(i=1;i!=0;i++)
    {
    if(a==1)
    break;
    if(a%2==0)
    a=a/2;
    else
    a=a*3+1;
    if(a>c)
    break;
    }
printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",j,b,c,i);
j++;
}
}
31. 11332 - Summing Digits
#include<stdio.h>
int main()
         {
long int n,sum;
while (scanf("%lu",&n)==1 && n!=0)
             {
                        if (n<10)
                        printf("%lu\n",n);
                       if (n>9)
             {
                     while (n>9)
                     {
                                 sum=0;
                                 while (n>0 )
                            {
                                sum=sum+n%10;
                                n=n/10;
                            }
                       n=sum;
                       }    printf("%lu\n",sum);
              }
       }
return 0;

         }
32. 10079 - Pizza Cutting
#include<stdio.h>
int main()
{
long int N;
  while(scanf("%ld",&N)==1)
          {
               if(N>=0&&N<=210000000)
               printf("%ld\n",(N*N+N+2)/2);
              if(N<0)
              break;
            }
return 0;
}
33. 10323 - Factorial! You Must be Kidding!!!
#include<stdio.h>
int main()
{
long long n;
while(scanf("%lld",&n)==1)
{
if(n<0&&n%2==0) printf("Underflow!\n");
else if(n<0&&n%2!=0) printf("Overflow!\n");
else if(n==0||n<=7) printf("Underflow!\n");
else if(n==8) printf("40320\n");
else if(n==9) printf("362880\n");
else if(n==10) printf("3628800\n");
else if(n==11) printf("39916800\n");
else if(n==12) printf("479001600\n");
else if(n==13) printf("6227020800\n");
else if(n>13) printf("Overflow!\n");
}
return 0;
}
34. 458 - The Decoder
#include<stdio.h>
#include<string.h>
int main()
{
int l,i;
char s[1000];
while(gets(s))
 {
 l=strlen(s);
 for(i=0;i<l;i++)
 printf("%c",s[i]-7);
 printf("\n");
 }
return 0;
}
35. 11461 - Square Numbers
#include<stdio.h>
#include<math.h>
int main()
{
long int num1,num2,x,sqr,i,j,n1,n2;
while(scanf("%ld%ld",&n1,&n2)==2)
       {
           if(n1==0 &&n2==0)break;
           sqr=0;
           num1=sqrt(n1);
           num2=sqrt(n2);
           for(i=num1;i<=num2;i++)
              {
                     x=pow(i,2);
                     if(x>=n1&&x<=n2) sqr++;
                     if(x>n2)break;
             }
         printf("%ld\n",sqr);
       }
return 0;
  }
36. 11854 - Egypt
#include<stdio.h>
int main()
{
int a,b,c;
  while (scanf("%d %d %d",&a,&b,&c)==3)
        {
         if (a==0 && b==0 && c==0)
         break;
          if (a<=0 || b<=0 ||c<=0)
                     printf("wrong\n");
           else if (a*a==b*b+c*c)
                     printf("right\n");
          else if (b*b==a*a+c*c)
                     printf("right\n");
          else if (c*c==a*a+b*b)
                     printf("right\n");
          else
                     printf("wrong\n");
         }
}
37. 11044 - Searching for Nessy
#include<stdio.h>
 int main()
 {
    int t,n,m;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d %d",&n,&m);
      printf("%d\n",(n/3)*(m/3));
    }
 }
38. 11805 - Bafana Bafana
#include <stdio.h>
int main()
{
    int i,t,n,k,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
        { scanf("%d %d %d",&n,&k,&p);

          printf("Case %d: %d\n",i,(((k-1+p)%n)+1));
        }
return 0;
}
39. 591 - Box of Bricks
#include<stdio.h>
int main()
{
int n,i,a[100],t=1,sum,ans,avr;
while(scanf("%d",&n)==1 && n!=0)
{
sum=0;
ans=0;
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++)
    sum=sum+a[i];
avr=sum/n;
for(i=0;i<n;i++)
    if(a[i]>avr)
        ans=ans+(a[i]-avr);
printf("Set #%d\nThe minimum number of moves is %d.\n\n",t,ans);
t++;
}
return 0;
}
40. 10300 - Ecological Premium
#include<stdio.h>
int main()
{
long long a,t,n,b,c,i,j,ans;
while(scanf("%lld",&t)==1)
    {
    for(i=0;i<t;i++)
        {
        ans=0;
        scanf("%lld",&n);
        for(j=0;j<n;j++)
            {
            scanf("%lld%lld%lld",&a,&b,&c);
            ans+=a*c;
            }
        printf("%lld\n",ans);
        }
    }
return 0;
}
41. 11150 - Cola
#include<stdio.h>
int main()
{
int sum,n;
while(scanf("%d",&n)==1)
{
sum=n;
while(n>=3)
{
sum=sum+(n/3);
n=(n/3)+(n%3);
}
if(n==2)
{
sum++;
}
printf("%d\n",sum);
}
return 0;
}
42. 12403 - Save Setu
#include <stdio.h>
#include <string.h>
int main ()
{
    int t,s=0,d=0;
    char a [100];
    scanf ("%d",&t);
    while ( t--)
    {
        scanf ("%s", a);
        if (strcmp (a, "donate")==0)
        {
            scanf ("%d", &d);
            s += d;
        }
        else
            printf ("%d\n", s);
    }
    return 0;
}
43. 11479 - Is this the easiest problem?
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
44. 11877 - The Coco-Cola Store
#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)==1)
    {
    if(n==0)
    break;
    int c=0;
    while(n>=3)
    {
    n=n-3;
    c++;
    n=n+1;
    }
    if(n==2)
    {
    c++;
        printf("%d\n",c);
    }
    else
        printf("%d\n",c);
    }
return 0;
}
45. 11875 - Brick Game
#include<stdio.h>
int main()
{
int n,t,a[100],i,j;
while(scanf("%d",&t)==1)
 {
 for(i=1;i<=t;i++)
  {
  scanf("%d",&n);
  for(j=0;j<n;j++)
  scanf("%d",&a[j]);
  printf("Case %d: %d\n",i,a[j/2]);
  }
 }
 return 0;
}
46. 12250 - Language Detection
# include <stdio.h>
# include <string.h>
int main()
{
   char str[17];
   int i;
   for(i=1;scanf("%s",str);i++)
   {
       if(str[0]=='#' && str[1]=='\0') return 0;

       if(!strcmp(str,"HELLO"))
       printf("Case %d: ENGLISH\n",i);
       else if(!strcmp(str,"HOLA"))
       printf("Case %d: SPANISH\n",i);
       else if(!strcmp(str,"HALLO"))
       printf("Case %d: GERMAN\n",i);
       else if(!strcmp(str,"BONJOUR"))
       printf("Case %d: FRENCH\n",i);
       else if(!strcmp(str,"CIAO"))
       printf("Case %d: ITALIAN\n",i);
       else if(!strcmp(str,"ZDRAVSTVUJTE"))
       printf("Case %d: RUSSIAN\n",i);
       else
        printf("Case %d: UNKNOWN\n",i);
   }
    return 0;
}
47. 11455 - Behold my quadrangle
# include <stdio.h>
int main()
{
int n,i,ar[5],j,k,temp;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d %d %d %d",&ar[0],&ar[1],&ar[2],&ar[3]);
if(ar[0]==ar[1] && ar[1]==ar[2] && ar[2]==ar[3])
printf("square\n");
else
{for(j=0;j<3;j++)
{for(k=0;k<3-j;k++)
{
if(ar[k]>ar[k+1])
{
temp = ar[k];
ar[k] = ar[k+1];
ar[k+1] = temp;
}}}
if(ar[0]==ar[1] && ar[2]==ar[3])
printf("rectangle\n");
else if((ar[0]+ar[1]+ar[2])>ar[3])
printf("quadrangle\n");
else
printf("banana\n");
}}
return 0;
}
48. 11498 - Division of Nlogonia
#include<stdio.h>
int main()
{
    long int testcase, x, y, m, n,i;
    while(scanf("%ld",&testcase)==1)
    {
        if(testcase==0)
            break;
        scanf("%ld%ld",&x,&y);
        for(i=1;i<=testcase;i++)
        {
            scanf("%ld%ld",&m,&n);
            if(x==m || y==n)
                printf("divisa\n");
            else if(x<m && y<n)
                printf("NE\n");
            else if(m<x && y<n)
                printf("NO\n");
            else if(m<x && n<y)
                printf("SO\n");
            else if(x<m && n<y)
                printf("SE\n");
        }
    }
    return 0;
}
49. 11984 - A Change in Thermal Unit
#include<stdio.h>
int main()
{
    int t,i;
    double f,a,c,d;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lf%lf",&c,&d);
            f = 9*c/5+d;
            a = f*5/9;
            printf("Case %d: %.2lf\n",i,a);
        }
    }
    return 0;
}
50. 10783 - Odd Sum
#include<stdio.h>
int main()
{
int a,b,c,sum,i,j;
while(scanf("%d",&c)==1)
{for(j=1;j<=c;j++)
    {scanf("%d%d",&a,&b);
    sum=0;
    if(a%2==0)
    a=a+1;
    if(b%2==0)
    b=b-1;
    for(i=a;i<=b;i=i+2)
    sum=sum+i;
    printf("Case %d: %d\n",j,sum);}
}
return 0;
}
