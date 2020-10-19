#include<stdio.h>

int main(){

	int n,k,i,c=0;
			//input the number of participants and position of  the particular participation
	scanf("%d %d",&n,&k);

	int a[n];	//Declare Array

	for(i=0;i<n;i++){
	    scanf("%d ",&a[i]);		//Enter the score of participants
	}

	for(i=0;i<n;i++){
	    if(a[i]>=a[k-1] && a[i]>0 ){	//condition to check
	        c+=1;				//count the number of participants
	    }
	}

	printf("%d",c);				//To print number of participants  who advance to next round
}
