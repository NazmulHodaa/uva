#include<stdio.h>
#include<string.h>

int main()
{
    int T,R,L,i;
    char str[1500];
    scanf("%d", &T);

    while(T--)
    {
       scanf("%s", &str);
       R = 0;
       L = strlen(str);
       if(L == 1 && str[0] == '0') printf("1\n");
       else if(L == 1 && str[0] == '1') printf("66\n");
       else
       {
           for(i=0; i<L; i++)
           {
               R = ((R*10) + (str[i]-48)) % 5;
           }
           if(R == 0) printf("76\n");
           else if(R == 1) printf("16\n");
           else if(R == 2) printf("56\n");
           else if(R == 3) printf("96\n");
           else if(R == 4) printf("36\n");
       }

    }
    return 0;
}

