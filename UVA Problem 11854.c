 #include<stdio.h>

int main()
{
    int a,b,c,d;

    while(1)
    {
        scanf("%d %d %d", &a, &b, &c);
        d = 0;

        if(a == 0 && b == 0 && c == 0) break;
        else if((a*a) == (b*b)+(c*c)) d++;
        else if((b*b) == (c*c)+(a*a)) d++;
        else if((c*c) == (b*b)+(a*a)) d++;

        if(d == 1) printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}
