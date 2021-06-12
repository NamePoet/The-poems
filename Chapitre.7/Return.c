#include <stdio.h>

int max(int a, int b)
{
    if ( a>b ) {
        return a;        //一个函数中可以出现多个return，也不一定要放在最后
    } else {
        return b;
    }
}
/*    int ret;
    if ( a>b ) {
        ret = a;
    } else {
        ret = b;
    }

    return ret;
}
*/
int main()
{
    int a,b,c;
    a = 5;
    b = 6;
    c = max(10,12);
    c = max(a,b);
    c = max(c,23);
    printf("%d\n", max(a,b));

    return 0;
}