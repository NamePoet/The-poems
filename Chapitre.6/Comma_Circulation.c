#include <stdio.h>
int main()
{
    int i;
    i = 3+4,5+6;       //赋值的优先级比逗号要高，所以 i = 3+4会先算     i = 7

    printf("%d\n", i);

    return 0;
}

// i = (3+4,5+6)     i = 11