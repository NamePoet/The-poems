#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    n = 3;
    int first = 1;
    int i = 1;
    while ( i<n ){
        first *= 10;
        i++;
    }
    //printf("fisrt=%d\n", first);
    //����100-999
    i = first; //������λ���õ�100����10�����ζ����ǳ�����
    while ( i<first*10 ) {
        int t = i;    //�ֽ�Ĺ����л��ƻ����i������Ҫ��һ����ʱ����ȥ��¼���i
        int sum = 0;
        do{
            int d = t%10;   //��һ������n���ݣ���һ��ѭ����n��
            t/=10;
            int p = 1;
            int j = 0;       //d*d = d^2  ���Լ�n-1��
            while ( j<n ) {
                p *= d;       //�˴���n��
                j++;
            }
            sum += p;
        } while( t>0 );
        if ( sum == i ) {
            printf("%d\n", i);
        }
        i++;
    }




    return 0;
}