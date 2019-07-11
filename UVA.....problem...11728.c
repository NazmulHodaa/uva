#include<stdio.h>

int main()
{
    int S,sum,ans,i,j,k,n;
    for(i=1; ; i++)
    {
        scanf("%d", &S);
        if(S == 0) break;
        n = 0;
        for(j=1; j<=S; j++)
        {
            sum = 0;
            for(k=1; k<=j; k++)
            {
                if(j % k == 0)
                    sum = sum + k;
            }
            if(S == sum)
            {
                ans = j;
                n++;
            }
        }
        if(n == 0) printf("Case %d: -1\n",i);
        else printf("Case %d: %d\n",i,ans);
    }
    return 0;
}

