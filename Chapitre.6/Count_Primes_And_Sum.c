#include <stdio.h>
int main()
{
    int m,n,i,k;
    int cnt = 0;
    int sum = 0;
    scanf("%d %d", &m,&n);
    if ( m==1 ){
        m=2;
    }
    for ( i=m;i<=n;i++ ){
        int isPrime = 1;
        for ( k=2;k<i-1;k++ )  //k�������Ǳ���һ�����1�ͱ���֮���Ƿ������������
            if ( i%k == 0 ){
                isPrime = 0;
                break;
            }
        // �ж�i�Ƿ�������
        if ( isPrime ) {
           cnt++;
           sum += i; 
        }
    }
    printf("%d %d\n", cnt, sum);

    return 0;
}