//author : Aritra Banerjee

#include <stdio.h>

int main(void) {
	// your code goes here
	int x;
	float y;
	scanf("%d%f",&x,&y);
	if(x%5!=0)
	{
	    printf("%.2f",y);
	}
	else if(x+0.5>y)
	{
	    printf("%.2f",y);
	}
	else
	{
	    printf("%.2f",y-x-0.5);
	}
	return 0;
}