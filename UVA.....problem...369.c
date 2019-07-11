#include<stdio.h>

int main()
{
    long long int n,m,p,i,c,t;
    while(scanf("%lld %lld", &n, &m) != EOF)
    {
        if(n == 0 && m == 0)
            break;
        p = n - m;
        t = n;
        c = 1;
        if(p <= m)
        {
            for(i=1; i<=p; i++,n--)
            {
               c = c * n;
               c = c / i;
            }
        }
        else
        {
            for(i=1; i<=m; i++,n--)
            {
               c = c * n;
               c = c / i;
            }
        }
        printf("%lld things taken %lld at a time is %lld exactly.\n",t,m,c);
    }
    return 0;
}
