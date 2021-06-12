#include <stdio.h>


void arrayAdd1(int k, int array[])
{
    array[k] = array[k] + 1;
}

int main()
{
    int score[10];
    int i=1;
    score[0] = 1;
    score[1] = 2;
    score[2] = 3;

    arrayAdd1(i,score);       //数组首地址就是数组名

    printf("%d-th number is:%d\n", i, score[i]);
    return 0;
}