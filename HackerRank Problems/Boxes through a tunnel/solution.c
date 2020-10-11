#include <stdio.h>   //header files
#include <stdlib.h>
#define MAX_HEIGHT 41  // macros are used so that we can change the value of a variable instantly
int is_lower_than_max_height(); //new function defined
struct box{  // structure defined
     int length,height,width;
};
typedef struct box box; //name of the structure
int get_volume(box b){ //function
    int volume;
    volume= b.height*b.length*b.width;   //formula for volume
    return(volume);
}
int is_lower_than_max_height(box b){  //function
    if(b.height<MAX_HEIGHT)   //condition for the box through a tunnel
         return 1;
    else
        return 0;
}
int main()  // main function
{
	int n;  //datatypes given
	scanf("%d", &n);  //reading values
	box *boxes = malloc(n * sizeof(box)); // dynamic memory allocation for reducing memory wastage
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {   //true/false statement... if true then only the if statement will be executed
			printf("%d\n", get_volume(boxes[i]));  // printing the volume from the function "get_volume(boxes[i])".
		}
	}
	return 0;
}
