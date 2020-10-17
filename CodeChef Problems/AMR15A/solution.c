//author : Arpit Kumar Jaiswal
#include <stdio.h>

int main(void) {
    int n,c=0,b=0;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);// taking input of array elements 
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)// since here a[i] represents the number of weapons each ith soldiers are carrying.
        c++;// so here c will count number of lucky soldiers who have even number of weapons
        if(a[i]%2!=0)
        b++;// and here b will count number of unlucky soldiers who have odd number of weapons
    }
    if(c>b)// so if no. of lucky soldiers is greater than no. of unlucky soldiers means MAHASENA is ready for battle!!!
    printf("READY FOR BATTLE");
    else
    printf("NOT READY");
	return 0;
}
