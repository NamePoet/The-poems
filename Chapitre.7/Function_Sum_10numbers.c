#include <stdio.h>

void sum(int begin, int end);    //  ������ԭ������

int main()       // ��������²�� int sum(int,int)    �������void���г�ͻ��
{
    sum(1,10);
    sum(20,30);
    sum(35,45);

    return 0;
}

void sum(int begin, int end)        //�����еĲ����������һ�����Ա�ֱ�ӵ���
{
    int i;
    int sum = 0;
    for ( i=begin; i<=end; i++ ) {
        sum += i;
    }
    printf("%d��%d�ĺ���%d\n", begin, end, sum);
}