#include <stdio.h>
int main()
{
    float a, b, c;

    a = 1.345f;
    b = 1.123f;
    c = a + b;
    if ( c== 2.468 )
        printf("���\n");
    else 
        printf("����ȣ�c=%.10f����%f\n", c,c);     //%.10fֻ��7λ����Ч�ģ��ڼ�����ڲ�����2.468����2.467999

    return 0;
}