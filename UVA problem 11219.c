#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,cd,cm,cy,bd,bm,by,result;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d/%d/%d",&cd,&cm,&cy);
        scanf("%d/%d/%d",&bd,&bm,&by);

        if((cd - bd) < 0)
            bm++;
        if((cm - bm) < 0)
            by++;
        result = cy - by;

        if(result < 0)
            printf("Case #%d: Invalid birth date\n",i);
        else if(result > 130)
            printf("Case #%d: Check birth date\n",i);
        else
            printf("Case #%d: %d\n",i,result);
    }
    return 0;
}
