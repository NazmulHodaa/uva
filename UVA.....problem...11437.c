#include<stdio.h>

int main()
{
    long long int N;
    double Ax,Ay,Bx,By,Cx,Cy,re;
    scanf("%lld", &N);
    while(N--)
    {
        scanf("%lf %lf %lf %lf %lf %lf", &Ax,&Ay,&Bx,&By,&Cx,&Cy);
        re = (Ax*(By-Cy)) - (Ay*(Bx-Cx)) + ((Bx*Cy)-(Cx*By));
        if(re < 0)
            re = -re;
        re = re / 14;
        printf("%.0lf\n",re);
    }
    return 0;
}

