#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,k,taka,per;
    char name[12][15],str[200],wise[12][15];

    while(scanf("%d", &n) != EOF)
    {
        for(i=0; i<n; i++)
            scanf("%s", &name[i]);
        getchar();
        for(j=0; j<n; j++)
        {
            gets(str);
            printf("%s %s\n",name[j],str);
            k = 0;
            while(str[k])
            {
                if(str[k] == 32) break;
                wise[j][k] = str[k];
                k++;
            }
            printf("%s\n",wise[j]);
            taka = 0;
            k++;
            while(str[k])
            {
                if(str[k] == 32) break;
                taka = (taka*10) + str[k]-48;
                k++;
            }
            printf("%d\n",taka);
            per = 0;
            k++;
            while(str[k])
            {
                if(str[k] == 32) break;
                per = (per*10) + str[k]-48;
                k++;
            }
            printf("%d\n",per);
            divide = taka / per;
            for(l=0; l<n; l++)
            {
                if(strcmp(wise[j],name[l]) == 0)
                    sum[l] = divide*per;


            }

        }
    }
}
