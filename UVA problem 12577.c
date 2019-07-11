#include<stdio.h>
#include<string.h>

int main()
{
    char str[10],str1[5]="Hajj",str2[6]="Umrah",str3[2]="*";
    int i;

    for(i=1; ; i++)
    {
        scanf("%s", &str);
        if(!strcmp(str,str3)) break;
        else if(!strcmp(str,str1)) printf("Case %d: Hajj-e-Akbar\n",i);
        else if(!strcmp(str,str2)) printf("Case %d: Hajj-e-Asghar\n",i);
    }
    return 0;
}

