#include<stdio.h>
#include<math.h>

int main()
{
    int n,l,x;
    while(scanf("%d",&x) != EOF)
    {
        if(x==0) break;
        n = (-1+sqrt(1+8*x))/2;
        l = (n * (n + 1)) / 2;
        if(l == x)
            printf("%d %d\n",n+1,n+1);

        else
        printf("%d %d\n",((n+1)*(n+2))/2-x,n+1);

    }
    return 0;
}

