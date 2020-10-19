#include<stdio.h>

int main(){

    int y,w;
		//input the points Yakko and Wakko get
    scanf("%d %d",&y,&w);

    if(y>=w){			//Condition to check 
        if (y==1)			//Result
            printf("%d/%d",1,1);
        else if(y==2)
            printf("%d/%d",5,6);
        else if(y==3)
            printf("%d/%d",2,3);
        else if(y==4)
            printf("%d/%d",1,2);
        else if(y==5)
            printf("%d/%d",1,3);
        else if(y==6)
            printf("%d/%d",1,6);
    }
    else{
        if (w==6)
            printf("%d/%d",1,6);	//Results
        else if(w==5)
            printf("%d/%d",1,3);
        else if(w==4)
            printf("%d/%d",1,2);
        else if(w==3)
            printf("%d/%d",2,3);
        else if(w==2)
            printf("%d/%d",5,6);
        else if(w==1)
            printf("%d/%d",1,1);
    }

    return 0;
}
