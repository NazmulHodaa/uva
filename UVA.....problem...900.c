#include<stdio.h>

int main()
{
    int N,i,j,k,re;
    while(scanf("%d", &N) != EOF)
    {
        if(N == 0) break;
        j = 0;
        k = 1;
        re = 0;
        for(i=1; i<=N; i++)
        {
            re = j + k;
            j = k;
            k = re;
        }
        printf("%d\n",re);
    }
    return 0;
}

