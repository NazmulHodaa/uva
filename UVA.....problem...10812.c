#include<stdio.h>

int main()
{
    int t,s,d,a,b;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &s, &d);
        a = (s + d) / 2;
        b = (s - d) / 2;
        if(((a+b) == s) && ((a-b) == d) && s >= d)
            printf("%d %d\n",a,b);
        else
            printf("impossible\n");
    }
    return 0;
}
