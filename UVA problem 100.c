#include<stdio.h>

int main()
{
    int I,J,K,L,N,S;
    while(scanf("%d %d", &I, &J) != EOF)
    {
        if(I <= J)
        {
            S = 1;
            for(K=I; K<=J; K++)
        {
            L = K;
            N = 1;
            while(L!=1)
            {
                if(L % 2 == 0) L = L / 2;
                else L = (3 * L) + 1;
                N++;
            }
            if(N > S) S = N;
        }
        printf("%d %d %d\n",I,J,S);
        }
        else
        {
            S = 1;
            for(K=J; K<=I; K++)
            {
                L = K;
                N = 1;
                while(L != 1)
                {
                    if(L % 2 == 0) L = L / 2;
                    else L = (3*L) + 1;
                    N++;
                }
                if(N > S) S = N;
            }
            printf("%d %d %d\n",I,J,S);
        }
    }
    return 0;
}
