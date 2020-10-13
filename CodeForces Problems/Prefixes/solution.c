#include<stdio.h>
int main()
{
        int n,i,x=0;
        scanf("%d",&n);  //inputing the numbers of letters
        char str[n];
        scanf("%s",&str);  //giving the string
        for(i=0;i<n;i+=2)
        {
            if(str[i]==str[i+1])  // checking if the current letter is equal to the next letter
            {                     //if equal we change it to the other letter and increment the count by 1    
                x=x+1;
                if(str[i]=='a') 
                {
                    str[i]='b';
                }
                else
                {
                    str[i]='a';
                }
                
            }
        }
        printf("%d\n%s\n",x,str);  // printing the output on the screen
        return 0;
}