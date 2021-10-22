#include <stdio.h>
int main(int argc, char *argv[])
{
    unsigned int iLoop = 1,iFactorial = 1;
    int iNumber = 0;
    printf("\n\nEnter a number: ");
    scanf("%d",&iNumber);
    if(iNumber < 0 )
    {
        printf("factorial of negative number dose not exist\n\n\n");
    }
    else
    {
        while(iLoop <= iNumber)
        {
            iFactorial*= iLoop; // product from 1 to n
            iLoop++; // Increment the value
        }
        printf("\n\nFactorial of %d is: %u\n\n\n\n",iNumber,iFactorial);
    }
    return 0;
}