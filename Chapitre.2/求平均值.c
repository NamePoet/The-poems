//写一个程序，输入两个整数，输出它们的值
#include <stdio.h>
int main()
{
	int a,b;
	
	scanf("%d %d", &a, &b);
	
	double c = (a+b) / 2.0;
	
	printf("%d和%d的平均值=%f\n", a , b, c);
	
	return 0;
} 
