#include<stdio.h>

int main()
{
    int T,R,V,x,y,z,i;
    scanf("%d", &T);
    for(i=0; i<T; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        V = z * (x+(x-y));
        R = V / (x+y);
        if(R <= 0)
            printf("0\n");
        else printf("%d\n", R);
    }
    return 0;
}

