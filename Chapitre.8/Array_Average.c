#include <stdio.h>
int main()
{
    int x;
    double sum = 0;
    int cnt = 0;
    //定义数组
    int number[100];       //定义了一个新的变量，名字叫number，这个变量是一个数组，数组里的每一个单元都是一个int，大小是100
    scanf("%d", &x);
    while ( x!= -1 ) {
        //对数组中的元素赋值
        number[cnt] = x;     //在每一次读到一个x后，会把它赋给数组中的某一个单元，单元的位置会随着程序的运行不断地递增，走到后面去
        //加入一段用于调试的代码
        {
            int i;
            printf("%d\t, cnt");
            for ( i=0; i<=cnt; i++ ) {     //
                printf("%d\t", number[i]);
            }
            printf("\n");
        }

        //       
        sum += x;
        cnt ++;
        scanf("%d", &x);
    }
    if ( cnt>0 ) {
        printf("%f\n", sum/cnt);
        int i;
        //走到最后一个放数据的有意义的单元
        for ( i=0; i<cnt; i++) {       //算出了平均数后，会再用一个循环去遍历它，遍历整个数组，把当中所有的元素都找出来，然后去判断它是不是大于平均数，大于则输出
            if ( number[i] > sum/cnt ) {          //使用数组中的元素
                printf("%d\n", number[i]);       //遍历数组
            }
        }
    }

    return 0;
}
