#include<stdio.h>

int main()
{
    char q[110],sign;
    int a,b,res,r,c,ca=0;

    while(gets(q))
    {
        if(sscanf(q,"%d %c %d = %d",&a,&sign,&b,&res) != 4)
            continue;

        if(sign == '+')
            r = a + b;
        else if(sign == '-')
            r = a - b;

        if(r == res) ca++;
    }
    printf("%d\n",ca);
    return 0;
}
