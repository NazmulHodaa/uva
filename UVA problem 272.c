#include<stdio.h>

int main()
{
    int I,J,N=0;
    char str[1234],result[1999];

    while(gets(str) != NULL)
    {
        I = 0;
        J = 0;
        while(str[I])
        {
            if(str[I] == '"')
            {
                N++;
                if(N % 2 != 0)
                {
                    result[J] = '`';
                    J++;
                    result[J] = '`';
                }
                else
                {
                    result[J] = 39;
                    J++;
                    result[J] = 39;
                }
            }
            else
                result[J] = str[I];
            I++;
            J++;
        }
        result[J] = '\0';
        printf("%s\n",result);
    }
    return 0;
}
