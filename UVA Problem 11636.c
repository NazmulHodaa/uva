#include<stdio.h>
#include<math.h>

int main()
{
   int N,S,I,J=1;
   while(scanf("%d", &N) != EOF)
   {
       if(N < 0) break;
       for(I=0; ; I++)
       {
           S = pow(2,I);
           if(S >= N) break;
       }
       printf("Case %d: %d\n",J,I);
       J++;
   }
   return 0;
}
