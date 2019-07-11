#include<stdio.h>

int main()
{
    int i,mod4,mod100,mod400,mod15,mod55,Leap,Ordinary,P=0;
    char str[1234567];

    while(scanf("%s", &str) != EOF)
    {
        if(P == 1) printf("\n");
        P = 1;
        Leap = 0;
        Ordinary = 0;
        mod4 = 0;
        mod100 = 0;
        mod400 = 0;
        mod15 = 0;
        mod55 = 0;
        for(i=0; str[i]; i++)
        {
            mod4 = ((mod4*10) + (str[i]-48)) % 4;
            mod100 = ((mod100*10) + (str[i]-48)) % 100;
            mod400 = ((mod400*10) + (str[i]-48)) % 400;
            mod15 = ((mod15*10) + (str[i]-48)) % 15;
            mod55 = ((mod55*10) + (str[i]-48)) % 55;
        }
        if((mod4==0 && mod100!=0) || mod400==0)
        {
            printf("This is leap year.\n");
            Leap = 1;
            Ordinary = 1;
        }
        if(mod15==0)
        {
            printf("This is huluculu festival year.\n");
            Ordinary = 1;
        }
        if(mod55==0 && Leap==1)
        {
            printf("This is bulukulu festival year.\n");
            Ordinary = 1;
        }
        if(Ordinary == 0)
            printf("This is an ordinary year.\n");
    }
    return 0;
}
