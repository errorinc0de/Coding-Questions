
#include<stdio.h>
int main(){
	int a,b,c=0;
	scanf("%d %d",&a,&b);

        while (a <= b)//Loop to add age
        {
            a = 3*a;
            b = 2*b;
 
            c=c+1;
        }
 
        printf("%d",c);
    }
