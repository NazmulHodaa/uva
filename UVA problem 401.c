#include<stdio.h>
#include<string.h>

int main()
{
    char str[22];
    int I,L,R,B,M,P,PM;
    while(gets(str) != NULL)
    {
        P = 0;
        PM = 0;
        M = 0;
        L = strlen(str);
        R = (L-1);
        B = L;
        for(I=0; I<L; I++,L--)
            if(str[I] == str[L-1]) P++;
        for(I=0; I<=R; I++)
        {
             if(str[I]=='A' || str[I]=='I' || str[I]=='H') PM++;
             else if(str[I]=='M' || str[I]=='O' || str[I]=='T') PM++;
             else if(str[I]=='U' || str[I]=='V' || str[I]=='W') PM++;
             else if(str[I]=='X' || str[I]=='Y' || str[I]=='1' || str[I]=='8') PM++;
        }
        for(I=0; I<=R; I++,R--)
        {
             if(str[I]=='A' || str[I]=='I' || str[I]=='H')
            {
                if(str[I]==str[R]) M++;
            }
            else if(str[I]=='M' || str[I]=='O' || str[I]=='T')
            {
                if(str[I]==str[R]) M++;
            }
            else if(str[I]=='U' || str[I]=='V' || str[I]=='W')
            {
                if(str[I]==str[R]) M++;
            }
            else if(str[I]=='E' && str[R]=='3') M++;
            else if(str[I]=='J' && str[R]=='L') M++;
            else if(str[I]=='L' && str[R]=='J') M++;
            else if(str[I]=='S' && str[R]=='2') M++;
            else if(str[I]=='Z' && str[R]=='5') M++;
            else if(str[I]=='2' && str[R]=='S') M++;
            else if(str[I]=='3' && str[R]=='E') M++;
            else if(str[I]=='5' && str[R]=='Z') M++;
            else if(str[I]=='X' || str[I]=='Y' || str[I]=='1' || str[I]=='8')
            {
                if(str[I]==str[R]) M++;
            }
        }
        if(B % 2 == 0)
        {
            if(B == (P*2) && B == PM)
                printf("%s -- is a mirrored palindrome.\n\n",str);
            else if(B == (P*2))
                printf("%s -- is a regular palindrome.\n\n",str);
            else if(B == (M*2))
                printf("%s -- is a mirrored string.\n\n",str);
            else
                printf("%s -- is not a palindrome.\n\n",str);
        }
        else
        {
            if(B == ((P*2)-1) && B == PM)
                printf("%s -- is a mirrored palindrome.\n\n",str);
            else if(B == ((P*2)-1))
                 printf("%s -- is a regular palindrome.\n\n",str);
            else if(B == ((M*2)-1))
                printf("%s -- is a mirrored string.\n\n",str);
            else
                printf("%s -- is not a palindrome.\n\n",str);
        }

    }
    return 0;

}
