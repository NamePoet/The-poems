#include <stdio.h>
int main()
{
    int x;
    int cnt = 0;

    for (x=2; cnt<50; x++) { //���ǰ50����
        int i;
        int isPrime = 1;  // x������
        for ( i=2; i<x; i++ ) {
            if ( x % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            cnt ++;
            printf("%d\t", x);
            if (cnt % 5 ==0) {    //ÿ���5�������ͻ���һ��
                printf("\n");
            }
        } 

    }
    return 0;
}
