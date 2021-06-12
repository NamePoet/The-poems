#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool b = 6>5;
    bool t = true;
    t = 2;
    printf("%d\n", b);      //输出结果是1，我们没有办法让printf输出一个true或false的值

    return 0;
}