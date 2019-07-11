#include<stdio.h>
#include<math.h>

int main()
{
    int t,a,b,i,n,sum;
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &a , &b);
        if(a % 2 == 0) a++;
        sum = 0;
        for(n=a; n<=b; n=n+2)
            sum = sum + n;
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
