#include <stdio.h>
int main()
{
    const int number = 10;
    int x,i;
    int count[number] = {0};

    for ( i=0; i<number; i++ ) {
        printf("%d\t", count[i]);
    }

    // for (i=0; i<number; i++ ) {
    //     count[i] = 0;
    // }
    scanf("%d", &x);
    while ( x!=-1 ) {
        if ( x>=0 && x<=9 ) {    //count[0]就代表0这个数字出现了多少次，count[9]就代表9这个数字出现了多少次
            count[x] ++;
        }
        scanf("%d", &x);
    }
    for ( i=0; i<number; i++ ) {
        printf("%d:%d\n", i, count[i]);
    }
    return 0;
}