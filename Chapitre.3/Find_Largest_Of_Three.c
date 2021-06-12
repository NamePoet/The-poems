#include <stdio.h>
int main()
{
    int a,b,c;
    printf("请依次输入三个整数: \n");
    scanf("%d %d %d", &a, &b ,&c);

    int max = 0;

    if( a>b ){                //大括号里只有一句话，可以省略大括号
        if( a>c ){
            max = a;
        } else{
            max = c;
        }
    } else {
        if ( b>c ) {
            max = b;
        } else {
            max = c;
        }
    }

    printf("The max is %d\n", max);

    return 0;
}