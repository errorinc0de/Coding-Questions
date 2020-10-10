#include<stdio.h>
main(){
    int n,i,j,count=0;  // datatypes given
    long int a[1000],tmp;  
    scanf("%d",&n); // reading values
    for(i=0;i<n;i++){   // loops for traversing
        scanf("%ld",&a[i]);  // reading values from loop
    }           
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){  // condition for Bubble sort i.e if previous element is greater than the next element then swap
               tmp=a[j];     // temporary variable for swaping
               a[j]=a[j+1];
               a[j+1]=tmp; // swaping done
               count++; // counting the number of swaping required
            }
        }
    }
    printf("Array is sorted in %d swaps.\n",count); // printing the number of minimum steps required for Bubble sort the series of numbers
    printf("First Element: %d\n",a[0]);  // printing first element
    printf("Last Element: %d\n",a[n-1]); // printing last element
    return 0;
}
