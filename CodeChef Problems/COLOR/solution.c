//author: amirvincent64

#include <stdio.h>

int main(void) {
    int T, N;
    scanf("%d", &T); //for reading number of test cases
    while (T--) {
        scanf("%d", &N); //for reading number of rooms in the chef's house
        int countr=0, countg=0, countb=0; //init room color counter
        char S[N];
        scanf("%s", S); //reading the current color configuration of rooms
        for (int i=0; i<N; i++) { //string char search from S[0] to S[N-1]
            if (S[i]=='R') {countr++;}
            if (S[i]=='G') {countg++;}
            if (S[i]=='B') {countb++;}
        }
        if (countr>=countg && countr>=countb) {N-=countr;} //Set N value to subtract the largest count of the colors from N
        else if (countg>=countr && countg>=countb) {N-=countg;}
        else if (countb>=countr && countb>=countg) {N-=countb;}
        printf("%d\n", N);
    }
}