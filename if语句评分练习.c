#include <stdio.h>

int main()
{
	int i; 
	printf("输入您的学生考了多少分");
	scanf("%d",&i);
	if(i>=90&&i<=100)
	{
		printf("成绩评定为A"); 
	 } 
	 
	else if(i>=80&&i<90)
	{
		printf("成绩评定为B"); 
	}
	else if(i>=70&&i<80)
	{
		printf("成绩评定为C"); 
	}
	else if(i>=60&&i<70)
	{
		printf("成绩评定为D"); 
	}
	else if(i>=0&&i<60)
	{
		printf("成绩评定为E"); 
	}
	else
	{
		printf("成绩输入不在指定范围");
	}
	return 0;
}

