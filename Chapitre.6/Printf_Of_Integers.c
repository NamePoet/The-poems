#include <stdio.h>
int main()
{
    char c = 012;              //unsigned int��ʾ������������Ϊ-1��ʾȫ1
    int i = 0x12;            //����С��int�ı�������printf��ʱ�򣬱����������Щ����ת��Ϊint����ȥ
    printf("c=%d,i=%d\n", c,i);

    return 0;
}