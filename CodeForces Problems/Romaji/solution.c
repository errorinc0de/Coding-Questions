//author:vikranth

#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];
    scanf("%s",s);   //inputing the string
    int n,i,c=0; 
    n=strlen(s);     //length of the string
    for(i=0;i<n;i++)
    {
        if(s[i]=='n')       //checking the conditions and passing the variables
            continue;
        else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            continue;
        else if(s[i+1]=='a'|| s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u')
            continue;
        else           //if they fail then the output is NO
        {
            c=1;
            break;
        }
        
    }
    if(c==1)          //printing the output based on the value of c
        printf("NO");
    else
        printf("YES");
    return 0;
}