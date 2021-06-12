#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    if ( x<0 ) {
        printf("fu ");
        x = -x;
    }

    int mask = 1;
    int t = x;
    while ( t>9 ) {     //第一个循环用来求出mask
        t /= 10;
        mask *= 10;
    }

    do
    {
        int d = x / mask;
        switch ( d )           //第二个循环用mask把整数从最高位分解到最低位
        {
        case 0: printf("ling"); break;
        case 1: printf("yi"); break;
        case 2: printf("er"); break;
        case 3: printf("san"); break;
        case 4: printf("si"); break;
        case 5: printf("wu"); break;
        case 6: printf("liu"); break;
        case 7: printf("qi"); break;
        case 8: printf("ba"); break;
        case 9: printf("jiu"); break;
        }
        if ( mask > 9) printf(" ");     //最后不要有行末的空格
        x %= mask;
        mask /= 10;
    } while ( mask > 0 );
    
    return 0;
}