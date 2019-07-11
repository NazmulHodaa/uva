#include<stdio.h>
#include<string.h>

int main()
{
    char str[132];
    int i,j,v,l;
    while(gets(str))
    {
        l = strlen(str);
        v = 0;
        for(i=0; i<l; i++)
        {
            if(str[i]>='0' && str[i]<='9') v = v + (str[i]-48);
            else if(str[i]=='*')
            {
                for(j=1; j<=v; j++)
                    printf("*");
                v = 0;
            }
            else if(str[i]=='b')
            {
                for(j=1; j<=v; j++)
                    printf(" ");
                v = 0;
            }
            else if(str[i]>='a' && str[i]<='z')
            {
                for(j=1; j<=v; j++)
                    printf("%c",str[i]);
                v = 0;
            }
            else if(str[i]>='A' && str[i]<='Z')
            {
                for(j=1; j<=v; j++)
                    printf("%c",str[i]);
                v = 0;
            }
            else if(str[i]=='!')
            {
                if(v == 0) printf("\n");
                else{
                for(j=1; j<=v; j++)
                    printf("\n");
                }
                v = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
