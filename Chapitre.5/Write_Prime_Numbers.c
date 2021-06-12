#include <stdio.h>
int main()
{
    int x;
    int cnt = 0;

    for (x=2; cnt<50; x++) { //输出前50个数
        int i;
        int isPrime = 1;  // x是素数
        for ( i=2; i<x; i++ ) {
            if ( x % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            cnt ++;
            printf("%d\t", x);
            if (cnt % 5 ==0) {    //每输出5个数，就换行一次
                printf("\n");
            }
        } 

    }
    return 0;
}
