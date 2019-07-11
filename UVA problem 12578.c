#include<stdio.h>
#include<math.h>

#define pi acos(-1)

int main()
{
    int T,L,I;
    double CA,RA,W,R;
    scanf("%d", &T);
    for(I=0; I<T; I++)
    {
        scanf("%d", &L);
        W = (L * 6) / 10.0;
        R = L / 5.0;
        RA = L * W;
        CA = pi * (R * R);
        printf("%.2lf %.2lf\n",CA,(RA-CA));
    }
    return 0;
}

