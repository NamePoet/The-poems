//计算2个正整数的和、差、积、商并输出，题目保证输入和输出全部在整型范围内
//看样例数据和看看题目一样重要   不要交互的输出   不要检查输入 
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	
	scanf("%d %d", &a, &b);
	
    printf("%d + %d = %d\n", a, b, a+b);
	printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    
	return 0;
	
} 
