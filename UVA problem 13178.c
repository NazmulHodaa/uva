#include<stdio.h>

int main()
{
    long long int input,test,result;
    scanf("%lld", &test);

    while(test--)
    {
        scanf("%lld", &input);
        result = (input * (input + 1)) / 2;
        if(result % 3 == 0)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

