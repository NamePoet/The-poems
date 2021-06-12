#include <stdio.h>
int main()
{
    const int MRN = 2;
    int type;

   scanf("%d", &type);
   switch ( type ){
    case 1:
       printf("你好");
       break;
    case 2:           
        printf("早上好");
        break;
    case 3:
        printf("晚上好");
        break;
    case 4:
        printf("再见");
        break;
    default:
        printf("啊，什么啊？");
   }

    return 0;
}
