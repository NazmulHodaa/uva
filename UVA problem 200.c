#include<stdio.h>
#include<string.h>

int main()
{
    char str[12345][22],all[1234567],result[12345];
    int i=0,j,k,l=0,len,max=0,p,m,n,t=0;

    while(scanf("%s", &str[i]) != EOF)
    {
        if(str[i][0] == '#') break;
        len = strlen(str[i]);
        if(len > max)
            max = len;
        i++;
    }
    for(j=0; j<max; j++)
    {
        for(k=0; k<i; k++)
        {
            if(str[k][j])
            {
                all[l] = str[k][j];
                l++;
            }
        }
    }
    for(m=0; m<l; m++)
    {
        p = 0;
        for(n=0; n<m; n++)
        {
            if(all[m] == all[n]) p++;
        }
        if(p == 0)
        {
            result[t] = all[m];
            t++;
        }
    }
    result[t] = '\0';
    printf("%s\n",result);

    return 0;
}

