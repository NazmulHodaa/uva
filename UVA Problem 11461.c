#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,ra,rb;
    double fra;
    while(scanf("%d %d", &a, &b) != EOF)
    {
        if(a==0 && b==0) break;
        ra = sqrt(a);
        fra = sqrt(a);
        rb = sqrt(b);
        if(ra == fra) printf("%d\n",rb-ra+1);
        else printf("%d\n",rb-ra);
    }
}
