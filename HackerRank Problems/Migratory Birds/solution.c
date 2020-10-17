#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int max=0,a[200000],b[5],i,j;
    unsigned int n;
    scanf("%du",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
        if(a[i]==1)
            b[0]++;
        else if(a[i]==2)
            b[1]++;
        else if(a[i]==3)
            b[2]++;
        else if(a[i]==4)
            b[3]++;
        else b[4]++;
    }
    for(i=0;i<5;i++)
    {
        if(b[i]>max)
        {
          max=b[i];
          j=i+1;
        }
    }
    printf("%d",j);
    return 0;
}
