#include <stdio.h>
int main()
{
    int a;
    a = 6;
    printf("sizeof(long double)=%ld\n", sizeof(long double));
    printf("sizeof(a)=%ld\n", sizeof(a++));     //4B (byte)  32λ(bit)   //sizeof()�еļ��������û����
    printf("a=%d\n", a);

    return 0;
}

//sizeof(a+1.0)=8            //double����������