#include <stdio.h>
int main()
{
    int number;
    int sum = 0;
    int count = 0;

    scanf("%d", &number);
    while (number != -1) {
        sum += number;
        count++;
        scanf("%d", &number);
    }

    printf("%.1f\n", 1.0*sum/count);

    return 0;
}

/*
do {
    scanf("%d", &number);
    if( number != -1) {
        sum += number;
        count++;
    }
} while( number != -1);

*/