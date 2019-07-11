#include<stdio.h>
#include<string.h>

int main()
{
    char str[1001];
    int i,j,k,l,p;
    while(gets(str))
    {
        p = 0;
        l = strlen(str);
        for(i=0; i<l; i++)
        {
            if(((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
               && ((str[i+1]<'a' || str[i+1]>'z') && (str[i+1]<'A' || str[i+1]>'Z')))  p++;
        }
        printf("%d\n",p);
    }
    return 0;
}
