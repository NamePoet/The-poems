#include <stdio.h>
int main()
{
    float a, b, c;

    a = 1.345f;
    b = 1.123f;
    c = a + b;
    if ( c== 2.468 )
        printf("相等\n");
    else 
        printf("不相等！c=%.10f，或%f\n", c,c);     //%.10f只有7位是有效的，在计算机内部不是2.468而是2.467999

    return 0;
}