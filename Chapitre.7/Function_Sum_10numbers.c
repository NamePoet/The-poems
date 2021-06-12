#include <stdio.h>

void sum(int begin, int end);    //  函数的原型申明

int main()       // 编译器会猜测成 int sum(int,int)    与下面的void是有冲突的
{
    sum(1,10);
    sum(20,30);
    sum(35,45);

    return 0;
}

void sum(int begin, int end)        //函数中的参数就像变量一样可以被直接调用
{
    int i;
    int sum = 0;
    for ( i=begin; i<=end; i++ ) {
        sum += i;
    }
    printf("%d到%d的和是%d\n", begin, end, sum);
}