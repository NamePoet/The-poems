#include <stdio.h>
int main()
{
    const int MRN = 2;
    int type;

   scanf("%d", &type);
   switch ( type ){
    case 1:
       printf("���");
       break;
    case 2:           
        printf("���Ϻ�");
        break;
    case 3:
        printf("���Ϻ�");
        break;
    case 4:
        printf("�ټ�");
        break;
    default:
        printf("����ʲô����");
   }

    return 0;
}
