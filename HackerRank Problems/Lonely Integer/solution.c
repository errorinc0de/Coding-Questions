#include<stdio.h>
main(){ 
    int n,a[1000],i,j,flag;    //datatypes 
    scanf("%d",&n);  // read value of number of element in array
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);    //read values in array
    }
    for(i=0;i<n;i++){
        flag=0;       // a variable for checking
        for(j=0;j<n;j++){ 
         if(i!=j){        //should not count for the safe element,.  so eliminating that case
            if(a[i]==a[j])  // if elements are same and belongs to different position then flag value will change
                flag=1;
         }
        }
        if(flag==0){    // if flag value remains same then that element doesn't pair up and hence our answer
          printf("%d",a[i]); // printing that value
          break;  // only one element can be there which doesn't pair up(according to the question)
        }
    }
    return 0;
}
