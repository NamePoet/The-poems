#include <stdio.h>
int main()
{
    int n;
    int i;
    double sum = 0.0;

    scanf("%d", &n);
    for ( i=1; i<=n; i++ ){
        sum += 1.0 / i;             //�ڳ���������һ���Ǹ��������������һ��Ҳ��ɸ�����
    }

    printf("f(%d) = %f\n", n,sum);
    return 0;
}