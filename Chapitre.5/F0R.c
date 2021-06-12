#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);
    int fact = 1;

    int i = 1;

    // for( i=1/*初始条件*/; i<=n/*循环继续的条件*/; i++/*循环每一轮要做的事情*/){
    //     fact *= i;
    // }

    for( i=n; i>=2; i--){
        fact *= i;
    }

    printf("%d!=%d\n", n,fact);
    return 0;
}
