#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);
    int fact = 1;

    int i = 1;

    // for( i=1/*��ʼ����*/; i<=n/*ѭ������������*/; i++/*ѭ��ÿһ��Ҫ��������*/){
    //     fact *= i;
    // }

    for( i=n; i>=2; i--){
        fact *= i;
    }

    printf("%d!=%d\n", n,fact);
    return 0;
}
