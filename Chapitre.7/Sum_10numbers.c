#include <stdio.h>
int main()
{
    int i;
    int sum;

    for ( i=1,sum=0; i<=10; i++) {
        sum += i;
    }
    printf("%d到%d的和是%d\n", 1, 10, sum);

    for ( i=20,sum=0; i<=30; i++) {
        sum += i;
    }
    printf("%d到%d的和是%d\n", 20, 30, sum);

    for ( i=35,sum=0; i<=45; i++) {
        sum += i;
    }
    printf("%d到%d的和是%d\n", 35, 45, sum);

    return 0;
}