#include<stdio.h>
#include<string.h>

int main()
{
    int N,L,In[55],R,i,j,t,s;
    scanf("%d", &N);

    while(N--)
    {
        scanf("%d", &L);
        for(i=0; i<L; i++)
            scanf("%d", &In[i]);
        R = 0;
        while(1)
        {
            t = 0;
            for(j=0; j<L-1; j++)
            {
                if(In[j] > In[j+1])
                {
                    s = In[j];
                    In[j] = In[j+1];
                    In[j+1] = s;
                    t++;
                    R++;
                }
            }
            if(t == 0) break;
        }
        printf("Optimal train swapping takes %d swaps.\n",R);
    }
    return 0;
}
