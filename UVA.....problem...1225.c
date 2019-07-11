#include<stdio.h>

int main()
{
    int t,n,i,j,s,r,re[10];
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        for(i=0; i<10; i++)
            re[i] = 0;
        for(j=1; j<=n; j++)
        {
            s = j;
            while(s > 0)
            {
                r = s % 10;
                re[r]++;
                s = s / 10;
            }
        }
        for(i=0; i<9; i++)
            printf("%d ",re[i]);
        printf("%d\n",re[9]);
    }
    return 0;
}
