#include <stdio.h>
int main()
{
    int n;
    int i;
    double sum = 0.0;
    int sign = 1;              //可以改成double sign = 1.0;

    scanf("%d", &n);
    for ( i=1; i<=n; i++ ){
        sum += sign*1.0 / i;        //若改成double sign = 1.0; 则可以改写成 sum += sign/i;
        sign = -sign;             //在除号两边有一个是浮点数，它会把另一个也变成浮点数
    }

    printf("f(%d) = %f\n", n,sum);
    return 0;
}