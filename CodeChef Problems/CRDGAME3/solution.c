//author: Soham Sarkar

#include<stdio.h>
int main(){
    int test,digits_c,digits_r;
    long int c,r;
    scanf("%d",&test); //for reading number of test cases
    while(test){
        scanf("%ld%ld",&c,&r);
        digits_c=c/9; //calculating number of digits in the number of Chef
        digits_r=r/9; //calculating number of digits in the number of Rick
        if(c%9!=0) // adding 1 since the number will be of 1 more digit if remainder is there
            digits_c+=1;
        if(r%9!=0)
            digits_r+=1;
        if(digits_r==digits_c) //output is 1 cause Rick will cheat and win
            printf("1 %d\n",digits_r);
        else if(digits_r<digits_c) //output is 1 cause Rick wins
            printf("1 %d\n",digits_r);
        else if(digits_r>digits_c)
            printf("0 %d\n",digits_c); //output is 0 as Chef wins
        --test;
    }
    return 0;
}
