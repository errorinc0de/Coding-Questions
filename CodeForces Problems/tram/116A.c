#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a,b,temp=0,i,f=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        temp=temp-a+b;
        if(i==1){
            f=temp;
        }
        if(f<=temp)
        {
            f=temp;
        }
        printf("%d",f);
    }
    return 0;
}