// Author: virkanth 

#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101],c[101];
    int n,i;
    scanf("%d",&n);   // takes in the number of test cases
    for(i=0;i<n;i++)
    {                       // takes in all the 3 inputs in one loop
        scanf("%s",a);     
        scanf("%s",b);
        scanf("%s",c);
        int j=strlen(a),k,t=0;  //finding the length of one string is enough as all 3 have same length 
        for(k=0;k<j;k++)
        {
			if (!((c[k]==a[k]) || (c[k]==b[k])))  // checking if they are equal 
            {
                t=1;    // equating the temporary variable to another value 
                break;
            }
        }
        if(t==1)     // giving based on the value of temporary variable 
        {
            printf("NO\n");
        }
        else
            printf("YES\n");
    }
}