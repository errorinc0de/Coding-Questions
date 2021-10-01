//author : Aritra Banerjee

#include <stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,K,i,j,x;
        scanf("%d %d",&N,&K);
        char a[N];
        for(i=0;i<N;i++)
        {
            scanf("%s",&a[i]);
        }
        for(j=1;j<=K;j++)
        {
            for(i=N-1;i>=N-K;i--)
            {
                if(a[i]=='T')
                {
                    a[i]=a[i+1];
                }
                else if(a[i]=='H')
                {
                    for(x=0;x<i;x++)
                    {
                        if(a[x]=='H')
                        {
                            a[x]='T';
                        }
                        else if(a[x]=='T')
                        {
                            a[x]='H';
                        }
                    }
                }
                a[i]=a[i+1];
            }
        }
        int count=0;
        for(j=0;j<N-K;j++)
        {
            if(a[j]=='H')
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}