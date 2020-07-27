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
            {
                count=count+3;
            }
            else if(s[j]=='s'||s[j]=='z')
            {
                count=count+4;
            }


        }
        printf("Case #%d: %d\n",i+1,count);
    }
}







