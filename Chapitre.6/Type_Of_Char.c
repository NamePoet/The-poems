#include <stdio.h>
int main()
{
    char c;
    char d;
    c = 1;
    d = 'A';
    if (c == d) {
        printf("���\n");
    } else {
        printf("�����\n");
    }
    printf("c=%d\n", c);
    printf("d=%d\n", d);

    return 0;
}