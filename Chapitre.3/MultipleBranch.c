#include <stdio.h>
int main()
{
   int type;

   scanf("%d", &type);

   if ( type ==1 ){
       printf("��ã�");
   } else if ( type == 2){
       printf("���Ϻã�");
   } else if ( type == 3){
       printf("���Ϻã�");
   } else if ( type == 4){
       printf("�ټ���");
   } else {
       printf("����ʲô����");
   }

    return 0;
}