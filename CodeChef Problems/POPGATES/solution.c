#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,i,count;
        scanf("%d%d",&n,&k);
        char arr[n];
        for(i=1;i<=n;i++)
        {
            scanf("%s",&arr[i]);
        }
        while(k--)
        {
        if(arr[n]=='H')
        {
                for(i=n-1;i>=1;i--)
                    {
                       if(arr[i]=='H')
                       {
                           arr[i]='T';
                       }else
                       {
                            arr[i]='H';
                       }
                    }
        }
        n--;
        }
        count=0;
        for(i=0;i<=n;i++)
        {
            if(arr[i]=='H')
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}