#include <stdio.h>

//题目：输入两个时间，每个时间分别输入小时和分钟的值，然后输出两个时间之间的差，也以几小时几分表示 
//如果直接分别减，会出现分钟借位的情况：1点40分和2点10分的差？ 
int main()
{
	int hour1, minute1;
	int hour2, minute2;
	
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	
	int t = t2-t1;
	
	printf("时间差是%d小时%d分。", t/60, t%60); 
	
	return 0;
}
