#include <stdio.h>
int main()
{
    int n;
    double dividend,divisor;
    double sum = 0.0;
    int i;
    double t;

    scanf("%d", &n);
    // n = 20000;
    dividend = 2;
    divisor = 1;
    for ( i=1; i<=n; i++ ) {
        sum += dividend/divisor;
        t = dividend;
        dividend = dividend + divisor;
        divisor = t;
    }
    printf("%.2f\n", sum);
    return 0;
}