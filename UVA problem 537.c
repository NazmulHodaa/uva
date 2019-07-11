#include<stdio.h>
#include<string.h>

int main()
{
    int testcase,k,m,M,i,j,l,p,u;
    char str[10000];
    double sum,po;

    scanf("%d", &testcase);
    getchar();

    for(k=1; k<=testcase; k++)
    {
        gets(str);
        p=0,u=0,i=0;
        sum = 0.0;
        for(j=0; ; j++)
            if(str[j] == '=') break;
        if(str[j-1] == 'P') p++;
        else if(str[j-1] == 'U') u++;
        else if(str[j-1] == 'I') i++;
        printf("j=%d\n",j);

        for(l=j+1; str[l]; l++)
        {
            if(str[l] == 32) break;
            else if(str[l]>=48 && str[l]<=57)
                sum = (sum*10.0) + (str[l]-48);
            else if(str[l] == '.')
            {
                po = 10.0;
                for(m=l+1; str[m]; m++)
                {
                    if(str[m] == ' ') break;
                    else
                        sum = sum + ((str[m]-48)/po);
                    po = po * 10.0;
                    printf("m=%c\n sum = %lf\n",str[m],sum);
                }
                l = m;
            }
        }
        if(p == 1) power = sum;
        else if
    }

}
