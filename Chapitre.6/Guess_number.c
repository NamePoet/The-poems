#include <stdio.h>
int main()
{
    int number, n;
    int inp;
    int finished = 0;
    int cnt = 0;
    scanf("%d %d", &number, &n);
    do {
        scanf("%d", &inp);        // 读入用户的输入
        cnt++;  //计数器++
        if ( inp<0 ) {
            printf("Game Over\n");
            finished = 1;          //finished用来控制退出循环
        } else if ( inp > number ) {
            printf("Too big\n");
        } else if ( inp < number ) {
            printf("Too small\n");
        } else {
            if ( cnt == 1 ) {
                printf("Bingo!\n");
            } else if ( cnt <= 3 ) {
                printf("Lucky You!\n");
            } else {
                printf("Good Guess!\n");
            }
            finished = 1;
        }
        if ( cnt == n ) {
            if ( !finished ) {
                printf("Game Over\n");
                finished = 1;
            } 
        }
    } while ( !finished );
    return 0;
}