/*
    构造素数表：预构造n以内（不含）的素数表
    (伪代码)
    1.开辟prime[n], 初始化其所有元素为1, prime[x]为1——表示x是素数
    2.令x=2
    3.如果x是素数, 则对于(i=2; x*i<n ; i++) 令prime[i*x]=0
    4.令x++, 如果x<n, 重复3, 否则结束

*/



#include <stdio.h>
int main() 
{
    const int maxNumber = 25;
    int isPrime[maxNumber];
    int i, x;
    for ( i=0; i<maxNumber; i++ ) {
        isPrime[i] = 1;
    }

    // for test
    printf("\t");
    for (i=2; i<maxNumber; i++) {
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
        for (i=2; i<maxNumber; i++) {
            printf("%d\t", isPrime[i]);
        }
        printf("\n");
        // for test
    }

    for ( i = 2; i < maxNumber; i++ ) {
        if ( isPrime[i] ) {
            printf("%d\t", i);
        }
    }
    printf("\n");
    

    return 0;
}