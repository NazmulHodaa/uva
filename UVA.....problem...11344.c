#include<stdio.h>
#include<string.h>

int main()
{
    int t,d,i,j,mode,n,de[10000];
    char str[10010];

    scanf("%d", &t);

    while(t--)
    {
        scanf("%s", &str);
        scanf("%d", &d);
        n = 0;
        for(i=0; i<d; i++)
            scanf("%d", &de[i]);
        for(i=0; i<d; i++)
        {
            mode = 0;
            for(j=0; str[j]; j++)
            {
                mode = ((mode * 10) + (str[j]-48)) % de[i];
            }
            if(mode == 0)
                n++;
        }
        if(n == d)
            printf("%s - Wonderful.\n",str);
        else
            printf("%s - Simple.\n",str);
    }
    return 0;
}

