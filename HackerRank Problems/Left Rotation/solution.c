#include<stdio.h>
main(){
    
    long int i,A[100000],d,n;  // datatypes given
    scanf("%ld %ld",&n,&d);  //reading values
    
    if(d<=n){  // condition for left rotation
        
        for(i=0;i<n;i++)  
        scanf("%ld",&A[i]);  //reading values from for loop
        
        for(i=d;i<n;i++){
            printf("%ld ",A[i]); // printing values
        }
        
        for(i=0;i<d;i++){
            printf("%ld ",A[i]); //printing values
        }
    }
    return 0;
}
