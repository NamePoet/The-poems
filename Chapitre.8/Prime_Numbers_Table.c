#include <stdio.h>

int main()
{
    const int maxNumber = 25;
    int isPrime[maxNumber];
    int i;
    int x;
    for ( i=0; i<maxNumber; i++) {
        isPrime[i] = 1;
    }
    // for test
    printf("\t");
    for ( i=2; i<maxNumber; i++ ) {
        printf("%d\t", i);
    }
    printf("\n");
    // for test
    for ( x=2; x<maxNumber; x++ ) {
        if ( isPrime[x] ) {
            for ( i=2; i*x<maxNumber; i++ ) {
                isPrime[i*x] = 0;
            }
        }
        // for test
        printf("%d\t", x);
        for ( i=2; i<maxNumber; i++ ) {
            printf("%d\t", isPrime[i]);
        }
        printf("\n");
        // for test
    }
    for (i=2; i<maxNumber; i++ ) {
        if ( isPrime[i] ) {
            printf("%d\t", i);
        }
    }
    printf("\n");
    return 0;
}