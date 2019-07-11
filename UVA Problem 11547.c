#include<stdio.h>

int main()
{
    int t,n;
    scanf("%d", &t);
    while(t)
    {
        scanf("%d", &n);
        n = (n * 567) / 9;
        n = (n + 7492) * 235;
        n = (n / 47) - 498;
        n = n / 10;
        n = n % 10;
        if(n < 0) n = n * (-1);
        t--;
        printf("%d\n",n);
    }
    return 0;
}
