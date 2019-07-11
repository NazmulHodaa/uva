#include<stdio.h>
#include<string.h>

int main()
{
    int testcase,k,m,M,i,j,l,p,u,Th,cth,Mi;
    char str[10000];
    double sum,sum1,po,power,voltage,current;

    scanf("%d", &testcase);
    getchar();

    for(k=1; k<=testcase; k++)
    {
        gets(str);
        p=0,u=0,i=0;
        Th=0,cth=0,Mi=0;
        sum = 0.0,sum1 = 0.0;
        for(j=0; ; j++)
            if(str[j] == '=') break;
        if(str[j-1] == 'P') p++;
        else if(str[j-1] == 'U') u++;
        else if(str[j-1] == 'I') i++;
        printf("j=%d\n",j);

        for(l=j+1; str[l]; l++)
        {
            if(str[l] == 32) break;
            else if(str[m] == 'k') Th++;
            else if(str[m] == 'm') cth++;
            else if(str[m] == 'M') Mi++;
            else if(str[l]>=48 && str[l]<=57)
                sum = (sum*10.0) + (str[l]-48);
            else if(str[l] == '.')
            {
                po = 10.0;
                for(m=l+1; str[m]; m++)
                {
                    if(str[m] == ' ') break;
                    else if(str[m] == 'k') Th++;
                    else if(str[m] == 'm') cth++;
                    else if(str[m] == 'M') Mi++;
                    else if(str[m]>=48 && str[m]<=57)
                        sum = sum + ((str[m]-48)/po);
                    po = po * 10.0;
                }
                l = m;
            }
        }
        /*if(Th==1) sum = sum*1000.0;
        else if(cth==1) sum = sum/1000.0;
        else if(Mi==1) sum = sum*1000000;*/
        if(p == 1) power = sum;
        else if(u == 1) voltage = sum;
        else if(i == 1) current = sum;
        Th=0,cth=0,Mi=0;


        for(j=l; ; j++)
            if(str[j] == '=') break;
        if(str[j-1] == 'P') p++;
        else if(str[j-1] == 'U') u++;
        else if(str[j-1] == 'I') i++;

        for(l=j+1; str[l]; l++)
        {
            if(str[l] == 32) break;
            else if(str[m] == 'k') Th++;
            else if(str[m] == 'm') cth++;
            else if(str[m] == 'M') Mi++;
            else if(str[l]>=48 && str[l]<=57)
                sum1 = (sum1*10.0) + (str[l]-48);
            else if(str[l] == '.')
            {
                po = 10.0;
                for(m=l+1; str[m]; m++)
                {
                    if(str[m] == ' ') break;
                    else if(str[m] == 'k') Th++;
                    else if(str[m] == 'm') cth++;
                    else if(str[m] == 'M') Mi++;
                    else if(str[m]>=48 && str[m]<=57)
                        sum1 = sum1 + ((str[m]-48)/po);
                    po = po * 10.0;
                }
                l = m;
            }
        }
       /* if(Th==1) sum = sum*1000.0;
        else if(cth==1) sum = sum/1000.0;
        else if(Mi==1) sum = sum*1000000;*/
        if(p == 1) power = sum1;
        else if(u == 1) voltage = sum1;
        else if(i == 1) current = sum1;

        printf("sum=%lf\nsum1=%lf\n",sum,sum1);

        /*if(p==1 && u==1)
            printf("Problem #%d\nI=%lfA\n\n",k,(power/voltage));
        else if(p==1 && i==1)
            printf("Problem #%d\nU=%lfV\n\n",k,(power/current));
        else if(u==1 && i==1)
            printf("Problem #%d\nP=%lfW\n\n",k,(current*voltage));*/
    }
    return 0;

}

