#include <stdio.h>

int isPrime(int i)
{
    int ret = 1;
    int k;
    for ( k=2; k<i-1; k++) {
        if ( i%k == 0 ) {
            ret = 0;
            break;     //Ҫ���ҵ������������������ľ�����ѭ��
        }
    }
    return ret;
}

int main()
{
    int m,n;
    int sum = 0;
    int cnt = 0;
    int i;

    scanf("%d %d", &m, &n);
    // m=10, n=31;
    if ( m==1 ) m=2;
    for ( i=m; i<=n; i++ ) {
        if ( isPrime(i) ) {         // i�ǲ���������������������Ժ��ƹ����õ���Ĵ�����ȥ
            sum += i;
            cnt++;
        }
    }    
    printf("%d %d\n", cnt, sum);

    return 0;
}