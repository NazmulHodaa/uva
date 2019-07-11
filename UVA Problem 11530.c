#include<stdio.h>

int main()
{
    int T,I,J,S;
    char str[101];
    scanf("%d", &T);
    getchar();
    for(I=1; I<=T; I++)
    {
        gets(str);
        J = 0;
        S = 0;
        while(str[J])
        {
            if(str[J]=='a'||str[J]=='d'||str[J]=='g'||str[J]=='j'||str[J]=='m') S = S + 1;
            else if(str[J]=='p'||str[J]=='t'||str[J]=='w'||str[J]==' ') S = S + 1;
            else if(str[J]=='b'||str[J]=='e'||str[J]=='h'||str[J]=='k') S = S + 2;
            else if(str[J]=='n'||str[J]=='q'||str[J]=='u'||str[J]=='x') S = S + 2;
            else if(str[J]=='c'||str[J]=='f'||str[J]=='i'||str[J]=='l') S = S + 3;
            else if(str[J]=='o'||str[J]=='r'||str[J]=='v'||str[J]=='y') S = S + 3;
            else if(str[J]=='s'||str[J]=='z') S = S + 4;
            J++;
        }
        printf("Case #%d: %d\n",I,S);
    }
    return 0;
}
