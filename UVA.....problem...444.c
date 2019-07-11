#include<stdio.h>
#include<string.h>

int main()
{
    char str[990];
    int len,val,i,r;

    while(gets(str) != NULL)
    {
        len = strlen(str);
        len--;
        if(str[0]>='0' && str[0]<='9')
        {
            for(i=len; i>=0; i--)
            {
                val = ((str[i] - 48) * 10) + (str[i-1] - 48);
                if(val < 32)
                {
                    val = (val * 10) + (str[i-2] - 48);
                    i--;
                    i--;
                }
                else
                    i--;
                printf("%c",val);

            }
            printf("\n");
        }
        else
        {
            for(i=len; i>=0; i--)
            {
                val = str[i];
                while(val > 0)
                {
                    r = val % 10;
                    printf("%d",r);
                    val = val / 10;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
