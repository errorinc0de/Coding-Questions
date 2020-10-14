#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, candles=0, i;
    long int a[100000];
    scanf("%d", &n);
    for (i=0; i<n; i++){
        scanf ("%ld", &a[i]);
    }
    int max=a[0];
    for (i=0; i<n; i++){
        if (max<a[i]){
            max=a[i];
        }
    }
    for (i=0; i<n; i++){
        if (a[i]==max)
        candles++;
    }
    printf("%d", candles);
    return 0;
}
