#include<stdio.h>
main(){
    int n,i,j,count=0;
    long int a[1000],tmp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }              // 1,4,3,7,2
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
               tmp=a[j];
               a[j]=a[j+1];
               a[j+1]=tmp;
               count++; 
            }
        }
    }
    printf("Array is sorted in %d swaps.\n",count);
    printf("First Element: %d\n",a[0]);
    printf("Last Element: %d\n",a[n-1]);
    return 0;
}
