#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int arr1[5]={3,2,5,4,6};     //C������������׵�ַ�Ǵ�0��ʼ����a[0]
    int arr2[5];                 //α�������׵�ַ���Դ�0��ʼҲ���Դ�1��ʼ
    int nb_smaller;
    
    for(i=0;i<=4;i++){
        nb_smaller=0;
        for (j=0; j<=4; j++) {
            if (arr1[i] > arr1[j]) {
                nb_smaller++;
            }
          
        }
    arr2[nb_smaller] =arr1[i];  
    }

    for (i=0; i<=4; i++) {
         printf("%d ",arr2[i]);
    }
   
    return 0;
}
