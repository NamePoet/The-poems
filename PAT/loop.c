#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,min,max;
    printf("Type an Integer:\n");
    scanf("%d\n",min);
    printf("Type an Integer:\n");
    scanf("%d\n",max);
    for (i=min;i<=max;i++){
        printf("%d",i);
    }

    return 0;
}

