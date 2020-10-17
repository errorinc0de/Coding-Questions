//author : Shreya Jaiswal
#include <stdio.h>
int GCD(long long int x,long long int y)//this is the function to calculate GCD of a number using recursion method
{
    if(x==0)
    return y;
    if(y==0)
    return x;
    if(y>x)// here if y>x this implies that there is a other highest common divisor that we can estimate by applying below operation
    return GCD(x,y%x);
    if(x>y)
    return GCD(x%y,y);

}
int main(void) {
    int t;
    scanf("%d\n",&t);// taken test cases as input
    for(int tm=0;tm<t;tm++)//loop for running various test cases
    {
        long long int a,b,lcm,g,i,j;
        scanf("%lld %lld\n",&a,&b);
        g=GCD(a,b);// function call to calculate GCD of a number using recursion
        lcm=(a*b)/g;//formula of finding LCM
        printf("%lld %lld\n",g,lcm);

    }
	return 0;
}
