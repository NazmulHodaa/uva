#include<stdio.h>
#include<string.h>

int main()
{
    char str[1001];
    int i,j,k,l;
    while(gets(str))
    {
        l = strlen(str);
        j = 0;
        for(i=0; i<=l; i++)
        {
           if(str[i]>='a' && str[i]<='z')
           {
               for(k=i+1; k<=l; k++)
               {
                   if(str[k]==' ' || str[k]=='\0')
                   {
                       j++;
                       i=k-1;
                       break;
                   }
               }
           }
           else if(str[i]>='A' && str[i]<='Z')
           {
               for(k=i+1; k<=l; k++)
               {
                   if(str[k]==' ' || str[k]=='\0')
                   {
                       j++;
                       i=k-1;
                       break;
                   }
               }
           }
        }
        printf("%d\n",j);
    }
    return 0;
}
