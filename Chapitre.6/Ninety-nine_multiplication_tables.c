//打印九九乘法表，二重循环，第一重从1走到n，第二重从1走到i，其中等号右边数字占4位，左对齐
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i,j;
    i = 1;
    while ( i<=n ) {
        j = 1;
        while ( j<=i ){
            printf("%d*%d=%d",j , i , i*j);
            if ( i*j<10 ) {
                printf("   ");
            } else {
                printf("  ");
            }
            j++;
        }
        printf("\n");
        i++;
    } 




    return 0;
}