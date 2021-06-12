#include <stdio.h>
int main()
{
    printf("%f\n", 12.0/0.0);
    printf("%f\n", -12.0/0.0);
    printf("%f\n", 0.0/0.0);

    return 0;
}

// printf("%d\n", 12/0);  编译会无法通过，因为整数无法除以0