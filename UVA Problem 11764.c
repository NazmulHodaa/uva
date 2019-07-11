#include<stdio.h>

int main()
{
    int T,N,I,J,U,D,W[51];
    scanf("%d", &T);
    for(I=1; I<=T; I++)
    {
        scanf("%d", &N);
        for(J=0; J<N; J++)
            scanf("%d", &W[J]);
        U = 0;
        D = 0;
        for(J=0; J<N-1; J++)
        {
            if(W[J] < W[J+1]) U++;
            else if(W[J] > W[J+1]) D++;
        }
        printf("Case %d: %d %d\n",I,U,D);
    }
    return 0;
}
