#include <stdio.h>
int main()
{
    int n;
    int i;
    double sum = 0.0;
    int sign = 1;              //���Ըĳ�double sign = 1.0;

    scanf("%d", &n);
    for ( i=1; i<=n; i++ ){
        sum += sign*1.0 / i;        //���ĳ�double sign = 1.0; ����Ը�д�� sum += sign/i;
        sign = -sign;             //�ڳ���������һ���Ǹ��������������һ��Ҳ��ɸ�����
    }

    printf("f(%d) = %f\n", n,sum);
    return 0;
}