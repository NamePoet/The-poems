#include <stdio.h>
int main()
{
    int i;
    char c;
    scanf("%d %c", &i, &c);     //%d%c是不一样的
    printf("i=%d, c=%d, c='%c'\n",i, c, c);

    return 0;
}