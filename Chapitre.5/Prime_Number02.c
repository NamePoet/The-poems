#include <stdio.h>
int main()
{
    int x;

    scanf("%d", &x);
    int i;
    //int isPrime = 1;  // x������

    for ( i=2; i<x; i++ ) {
        if ( x % i == 0) {
            //isPrime = 0;
            break;   //����ѭ��
        }
        //printf("%d\n", i);
    }
    //if (isPrime == 1) {
    if ( i < x ){
        printf("��������\n");
    } else {
        printf("������\n");
    }
    return 0;
}