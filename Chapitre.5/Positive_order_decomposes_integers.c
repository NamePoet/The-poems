#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

   // int cnt = 0;
    int mask = 1;
    int t = x;
    while( t>9 ){
        t /= 10;
        mask *= 10;
    } 
     //   cnt++;

    printf("x=%d, mask=%d\n", x, mask);
    // int t=0;
    // do {
    //     int d = x%10;
    //     t = t*10+d;
    //     x /= 10;
    // } while ( x>0 );
    // printf("x=%d, t=%d\n", t);
    // x = t;

    // do {
    //     int d = x%10;
    //     printf("%d", d);
    //     if ( x >= 10) {
    //         printf(" ");
    //     }
    //     x /= 10;
    // } while (x>0);
      //  int mask = 10000;
        // int mask = pow(10, cnt-1);
        do {
            int d = x / mask;
            printf("%d", d);
            if ( mask>9 ) {
                printf(" ");
            }
            x %= mask;
            mask /= 10;
            //printf("x=%d, mask=%d, d=%d\n", x, mask, d);
        } while( mask>0 );
    printf("\n");

    return 0;
}