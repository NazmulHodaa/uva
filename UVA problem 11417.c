#include<stdio.h>

int main()
{
    int N,G,L,M,i,j,result;

    while(1)
    {
        scanf("%d", &N);
        if(N == 0) break;
        result = 0;
        for(i=1; i<N; i++)
        {
            for(j=i+1; j<=N; j++)
            {
                G = i;
                L = j;
                while(1)
                {
                    if(L % G == 0) break;
                    M = G;
                    G = L % M;
                    L = M;
                }
                result = result + G;
            }
        }
        printf("%d\n",result);
    }
    return 0;
}

