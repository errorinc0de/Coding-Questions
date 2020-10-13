#include<stdio.h>  // header file
main(){
    int n,arr[1000],i,temp; //datatypes assigned
    scanf("%d",&n);  //reading value
    for(i=0;i<n;i++){  
        scanf("%d ",&arr[i]); // reading values and sorring in the array "arr[]"
    }
    for(i=0;i<n/2;i++){
        temp=arr[i];  //swaping array elements
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]); //printing values
    }
    return(0);
}
