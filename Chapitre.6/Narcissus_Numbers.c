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
    //遍历100-999
    i = first; //根据三位数得到100，拿10乘两次而不是乘三次
    while ( i<first*10 ) {
        int t = i;    //分解的过程中会破坏这个i，所以要用一个临时变量去记录这个i
        int sum = 0;
        do{
            int d = t%10;   //算一个数的n次幂，做一个循环跑n遍
            t/=10;
            int p = 1;
            int j = 0;       //d*d = d^2  乘自己n-1遍
            while ( j<n ) {
                p *= d;       //此处乘n遍
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