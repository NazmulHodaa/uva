#include<stdio.h>

int main()
{
    int b1,b2,b3,c1,c2,c3,g1,g2,g3;
    int i,j,re[6],min;

    while(scanf("%d%d%d%d%d%d%d%d%d", &b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3) != EOF)
    {
        re[0] = b2+b3+c1+c3+g1+g2;
        re[1] = b2+b3+c2+c1+g1+g3;
        re[2] = b1+b3+c2+c3+g1+g2;
        re[3] = b2+b1+c2+c3+g1+g3;
        re[4] = b1+b3+c1+c2+g3+g2;
        re[5] = b2+b1+c1+c3+g3+g2;

        min = re[0];
        j = 0;

        for(i=1; i<6; i++)
        {
            if(re[i] < min)
            {
                min = re[i];
                j = i;
            }
        }
        if(j == 0) printf("BCG %d\n",min);
        else if(j == 1) printf("BGC %d\n",min);
        else if(j == 2) printf("CBG %d\n",min);
        else if(j == 3) printf("CGB %d\n",min);
        else if(j == 4) printf("GBC %d\n",min);
        else if(j == 5) printf("GCB %d\n",min);
    }
    return 0;
}
