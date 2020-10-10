#include<stdio.h>
int main(){
    int test;
    int n;
    long int k,max;
    scanf("%d",&test);
    while(test){
        max=0;
        int flag=0;
        scanf("%d%ld",&n,&k);
        long int p[n+1];
        for(int i=1;i<=n;i++){
            scanf("%ld",&p[i]);
            if(k%p[i]==0 && max<p[i]){
                max=p[i];
                flag=1;
            }
        }
        if(flag)
            printf("%ld\n",max);
        else if(flag==0)
            printf("-1\n");
        --test;
    }
    return 0;
}
