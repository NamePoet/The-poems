#include <stdio.h>
//void swap(int a, int b);

void swap();       //��֪����û�в����������е�swap(a,b);    �²�������int      һ��Ҫ�ں�����Ѳ���дȫ

int main()
{
    int a = 5;      //�Դ˴���a��b��ֵ����Ӱ�������x��y����Ϊ���ǲ���һ��
    int b = 6;

    swap(a,b); //����swap����ʱ��Ҫ�뿪main( )������ʵ�����뿪���ı����ռ�
    {
        int a = 0;
        printf("a=%d\n", a);  
    }
    
   // if ( a<b ) {
      //  int i = 10;               //�������������ı������������ں���������������ͷ���뿪����飬i�Ͳ�������
    //}

    //i++     i�Ƿ����ȡ����a��b�Ĵ�С��ϵ����Ϊiֻ�ڴ���������ܻ����  ��i�� undeclared

        //����ص���һ��ʱ��x��y�Ѿ��������ˣ���Ϊ�����Ѿ�������swap����������

    printf("a=%d,b=%d\n", a, b); 
    return 0;
}

void swap(double a, double b)
{
    int swap;
    int t = a;           //����ִ�е���һ��ʱ��a��b��Ϊ���棬���ǻ��ڣ�����Ϊ���ã����ǲ��ڵ�ǰ������������
    printf("in swap,a=%f,b=%f\n", a, b);
    a = b;
    b = t;
}