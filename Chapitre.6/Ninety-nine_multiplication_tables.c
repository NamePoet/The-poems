//��ӡ�žų˷�������ѭ������һ�ش�1�ߵ�n���ڶ��ش�1�ߵ�i�����еȺ��ұ�����ռ4λ�������
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