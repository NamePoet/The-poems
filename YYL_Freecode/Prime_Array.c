#include <stdio.h>
int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes);
int main(void) 
{
    const int number = 10;
    int Prime[10] = {2};
    int count = 1;
    int i = 3;

    {//为了输出更好看，在while语句前加上了一个表头
        int i;
        printf("\t\t\t\t");
        for ( i=0; i<number; i++ ) {
            printf("%d\t", i);
        }
        printf("\n");
    }

    while ( count < number ) {
        if ( isPrime(i, Prime, count) ) {
            Prime[count++] = i;
        }

        {//这个大括号的“块”中的语句起调试作用        块中的i和外部的i是没有关系的
            printf("i=%d \tcnt=%d\t",i, count);
            int i;
            for ( i=0; i<number; i++ ) {
                printf("%d\t", Prime[i]);
            }
            printf("\n");
        }

        i++;
    }
    for ( i=0; i<number; i++ ) {
        printf("%d", Prime[i]);
        if ( (i+1)%5 ) printf("\t");
        else printf("\n");
    }

    return 0;
}


int isPrime(int x, int knownPrimes[], int numberOfKnownPrimes) 
{
    int ret = 1;
    int i;
    for ( i=0; i<numberOfKnownPrimes; i++ ) {
        if ( x % knownPrimes[i] == 0 ) {
            ret = 0;
            break;
        }
    }
    return ret;
}