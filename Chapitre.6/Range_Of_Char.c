#include <stdio.h>
int main()
{
    char c = 127;    //unsigned的意思是这个整数不以补码的形式来表示负数，这个整数没有负数部分，只有0和正整数部分
    int i = 255;
    c = c+1;
    printf("c=%d,i=%d\n", c,i);
    //    11111111
    //    00000000  00000000    00000000    11111111

    return 0;
}