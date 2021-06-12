#include <stdio.h>
int isPrime(int x, int knownPrimes[], int NumberOfKnownPrimes);

int main(void)
{
    const int number = 10;
    int prime[number] = {2};    //构造一个数组表，初始化为2
    int count = 1;
    int i = 3;

    {
        int i;
        printf("\t\t\t\t");
        for ( i=0; i<number; i++ ) {
            printf("%d\t", i);
        }
        printf("\n");
    }
    
    while ( count < number ) {
        if ( isPrime(i, prime , count) ) { //如果用isPrime发现i是一个素数，就把i加到prime()函数里头去
            prime[count++] = i;
        }
        {   
            //可以在大括号里面定义自己的变量，而不会影响到外面的变量，可以通过for循环，i的值是会改变的
            printf("i=%d\tcnt=%d\t",i,count);
            {
                int i;
                for ( i=0; i<number; i++) {
                    printf("%d\t", prime[i]);
                }
                printf("\n");
        
            }    
        }
        i++;
    }
    for ( i=0; i<number; i++) {
        printf("%d", prime[i]);
        if ( (i+1)%5 ) printf("\t");
        else printf("\n");
    }
    return 0;
}

int isPrime(int x, int knownPrimes[], int NumberOfKnownPrimes)
{
    int ret = 1;
    int i;
    for ( i=0; i<NumberOfKnownPrimes; i++ ) {
        if ( x % knownPrimes[i] ==0 ) {
            ret = 0;
            break;
        }
    }
    return ret;
}