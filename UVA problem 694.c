#include<stdio.h>

int main()
{
    long long int A,L,N,T=1;
    while(1)
    {
        scanf("%lld %lld", &A, &L);
        if(A<0 && L<0) break;
        printf("Case %lld: A = %lld, limit = %lld,",T++,A,L);
        N = 0;
        while(A<=L)
        {
            if(A == 1)
            {
                N++;
                break;
            }
            else if(A % 2 == 0)
                A = A/2;
            else A = 3*A+1;
            N++;
        }
        printf(" number of terms = %lld\n",N);
    }
    return 0;
}
