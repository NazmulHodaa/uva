#include<stdio.h>

int main()
{
    int t,a,f,i,j,k,l,m,n;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &a,&f);
        for(j=1; j<=f; j++)
        {
            m = 1;
            n = 1;
            for(k=1; k<(2*a); k++)
            {
                for(l=1; l<=m; l++)
                    printf("%d",m);
                printf("\n");
                if(n<a) m++;
                else m--;
                n++;
            }
            if(i<t || j<f) printf("\n");
        }
    }
    return 0;
}
