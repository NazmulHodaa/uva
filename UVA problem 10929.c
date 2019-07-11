#include<stdio.h>
#include<string.h>

int main()
{
    char input[1010];
    int i,sum,l;

    while(scanf("%s", &input) != EOF)
    {
        l = strlen(input);
        if(input[0] == '0' && l == 1) break;
        i = 0;
        sum = 0;
        while(input[i])
        {
            if(i % 2 == 0)
                sum = sum + (input[i] - 48);
            else
                sum = sum - (input[i] - 48);
            i++;
        }
        if(sum % 11 == 0)
            printf("%s is a multiple of 11.\n",input);
        else
            printf("%s is not a multiple of 11.\n",input);
    }
    return 0;
}
