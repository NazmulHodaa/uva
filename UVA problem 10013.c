#include<stdio.h>

int ar[10000010],ar1[1000010];
char str[1234567];

int main()
{
    int N,M,I,J,K,L,P,R,W,SUM;

    scanf("%d", &N);

    while(N)
    {
        scanf("%d", &M);
        for(I=0; I<M; I++)
            scanf("%d %d",&ar[I], &ar1[I]);
        R = 0;
        SUM = 0;
        K = 0;
        for(J=M-1; J>=0; J--)
        {
            SUM = ar[J] + ar1[J] + R;
            if(SUM < 10)
            {
                str[K] = SUM + 48;
                R = 0;
            }
            else
            {
                W = SUM % 10;
                str[K] = W + 48;
                R = 1;
            }
            K++;
        }
        if(R == 1)
            str[K++] = 49;
        for(L=K-1; L>=0; L--)
        {
            printf("%c",str[L]);
        }
        printf("\n");
        if(N != 1)
            printf("\n");
        N--;

    }
    return 0;
}
