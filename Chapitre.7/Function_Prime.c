#include <stdio.h>

int isPrime(int i)
{
    int ret = 1;
    int k;
    for ( k=2; k<i-1; k++) {
        if ( i%k == 0 ) {
            ret = 0;
            break;     //要查找的是素数，不是素数的就跳出循环
        }
    }
    return ret;
}

int main()
{
    int m,n;
    int sum = 0;
    int cnt = 0;
    int i;

    scanf("%d %d", &m, &n);
    // m=10, n=31;
    if ( m==1 ) m=2;
    for ( i=m; i<=n; i++ ) {
        if ( isPrime(i) ) {         // i是不是素数，这个函数可以以后复制过来用到别的代码中去
            sum += i;
            cnt++;
        }
    }    
    printf("%d %d\n", cnt, sum);

    return 0;
}