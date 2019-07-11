#include<stdio.h>

int main()
{
    long long int N,M;
    int L=1;
    for(N=2; ;N++)
    {
        M = N;
        while(M > 1 && M % 2 == 0)
            M = M / 2;
        while(M > 1 && M % 3 == 0)
            M = M / 3;
        while(M > 1 && M % 5 == 0)
            M = M / 5;

        if(M == 1) L++;
        if(L == 1500) break;
    }
    printf("%lld\n",N);
}
