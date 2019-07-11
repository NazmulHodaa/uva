#include<stdio.h>

int main()
{
   long long int t,s,n,cost;
   scanf("%lld", &t);
   while(t--)
   {
       scanf("%lld", &s);
       n = (s+1)/2;
       cost = (n*n)+(n*n)-s;
       printf("%lld\n",cost);
   }
   return 0;
}
