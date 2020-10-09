//author : Ajeet Kumar Jaiswal
//My solution link : https://www.codechef.com/viewsolution/38785374
#include <stdio.h>
#include <string.h>
int main(void) {
    long long int t;
    scanf("%lld\n",&t);
    for(int tm=0;tm<t;tm++)//To run each test case
    {
        long long int c=0;//Here c will count the maximum number of pairs, that we have to output in result.
        char s[1000001];// here s is the string S
        scanf("%s",s);
        long long int l=strlen(s);
        long long int i;
        for(i=0;i<l;i++){
	        if((s[i]=='x'&&s[i+1]=='y')||(s[i]=='y'&&s[i+1]=='x')){// Here since S contains only characters 'x' and 'y' that's why checked only for s[i],s[i+1] for x and y only.
	            c++;
	            i++;//Here we are incrementing i again so that we can check next two adjacent pair continuously that whether they are forming pair or not.
	        }
        }
        printf("%lld\n",c);// Here c will give the required output.
    }
	return 0;
}
