#include <stdio.h>

int main()
{
	char ch;
	printf("请输入成绩评级");
	scanf("%c",&ch);//注意分号位置 
	
	switch (ch)
	{
		case 'a':printf("不错\n");break;//switch语句只能跳入不能跳出，需要break跳出 
		case 'b':printf("还行\n");break;
		case 'c':printf("滚\n");break;
		default:printf("错误\n");break;
		
	}
	 
	
	return 0;
}
