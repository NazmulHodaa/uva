#include<stdio.h>

int main()
{
    int t,n,j,sum;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        sum = 0;
        for(j=1; j<=(n/2); j++)
        {
            if(n % j == 0)
                sum = sum + j;
        }
            if(sum == n)
                printf("perfect\n");
            else if(sum > n)
                printf("abundant\n");
            else
                printf("deficient\n");
        }
        return 0;
}
