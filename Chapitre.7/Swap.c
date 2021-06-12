#include <stdio.h>
//void swap(int a, int b);

void swap();       //不知道有没有参数，当运行到swap(a,b);    猜测有两个int      一定要在函数里把参数写全

int main()
{
    int a = 5;      //对此处的a和b赋值不会影响下面的x、y，因为它们不在一起
    int b = 6;

    swap(a,b); //调用swap函数时，要离开main( )函数，实质是离开它的变量空间
    {
        int a = 0;
        printf("a=%d\n", a);  
    }
    
   // if ( a<b ) {
      //  int i = 10;               //定义在这个块里的变量，其生存期和作用域就在这个里头，离开这个块，i就不存在了
    //}

    //i++     i是否存在取决于a和b的大小关系，因为i只在大括号里，可能会出现  “i” undeclared

        //程序回到这一步时，x、y已经不存在了，因为我们已经结束了swap函数的运行

    printf("a=%d,b=%d\n", a, b); 
    return 0;
}

void swap(double a, double b)
{
    int swap;
    int t = a;           //程序执行到这一步时，a、b作为生存，它们还在；但作为作用，它们不在当前的作用域里面
    printf("in swap,a=%f,b=%f\n", a, b);
    a = b;
    b = t;
}