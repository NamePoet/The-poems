#include <stdio.h>
int main()
{
    char c = 012;              //unsigned int表示的最大的数，因为-1表示全1
    int i = 0x12;            //所有小于int的变量传给printf的时候，编译器会把这些变量转换为int传进去
    printf("c=%d,i=%d\n", c,i);

    return 0;
}