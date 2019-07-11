#include<stdio.h>

int main()
{
    int T,A,B,C,I=1;
    scanf("%d", &T);

    while(I<=T)
    {
        scanf("%d %d %d", &A, &B, &C);
        if((A>B && A<C) || (A<B && A>C)) printf("Case %d: %d\n",I,A);
        else if((B>A && B<C) || (B<A && B>C)) printf("Case %d: %d\n",I,B);
        else printf("Case %d: %d\n",I,C);
        I++;
    }
    return 0;
}
