#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,sum,in[110];

    for(i=0; ; i++)
    {
        scanf("%d", &in[i]);
        if(in[i] == 0) break;
    }
    printf("PERFECTION OUTPUT\n");
    for(j=0; j<i; j++)
    {
            sum = 0;
            for(k=1; k<=in[j]/2; k++)
            {
                if(in[j] % k == 0)
                    sum = sum + k;
            }
            if(in[j] < 10) printf("    ");
            else if(in[j] < 100) printf("   ");
            else if(in[j] < 1000) printf("  ");
            else if(in[j] < 10000) printf(" ");
            if(sum == in[j]) printf("%d  PERFECT\n",in[j]);
            else if(sum < in[j]) printf("%d  DEFICIENT\n",in[j]);
            else printf("%d  ABUNDANT\n",in[j]);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
