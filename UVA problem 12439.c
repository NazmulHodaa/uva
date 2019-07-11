#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20],str2[20],str3[20],str4[20];
    long long int t,sy,ey,m4,m100,m400,i,j,r;

    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {
       scanf("%s %s %lld",&str1, &str2, &sy);
       scanf("%s %s %lld",&str3,&str4,&ey);
       r = 0;
       ls = 0;
       le = 0;

       if((strcmp(str1,"February") != 0) && (strcmp(str1,"January") !=0)) sy++;
       if(strcmp(str3,"January") == 0) ey--;
       else if((strcmp(str3,"February") == 0) && (strcmp(str4,"29,") !=0)) ey--;
       sy--;

       m4 = (ey/4)-(sy/4);
       m100 = (ey/100)-(sy/100);
       m400 = (ey/400)-(sy/400);

       r = (m4+m400) - m100;

       printf("Case %lld: %lld\n",i,r);
    }
    return 0;
}

