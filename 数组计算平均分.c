#include <stdio.h>

#define NUM 10 //使用宏定义NUM，便于改人数 
int main()

{
	int s[NUM];
	int i,sum = 0;
	
	for(i=0; i<10;i++)
	{
		printf("请输入第%d位同学的成绩",i+1);
		scanf("%d",&s[i]);
		sum+=s[i];
	}
	printf("录入完毕，该次考试平均分是%.2f\n",(double)sum/NUM);//有分数，强制转换双精度浮点型 
	
		for(i=0; i<10;i++)
	{
		printf("第%d位同学的成绩是%d\n",i+1,s[i]);
	}
    
	
	
 } 
