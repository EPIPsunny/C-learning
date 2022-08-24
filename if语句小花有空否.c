#include <stdio.h>

int main()
{
	char isRain,isFree;
	printf("是否有空(Y/N)\n");
	scanf("%c",&isFree);
	
	getchar();//第一个输入后点回车后，回车会作为字符输入下一个scanf，用此过滤回车 
	
	printf("是否下雨(Y/N)\n");
	scanf("%c",&isRain);
	
	if(isFree=='Y')
	{
		if(isRain=='Y')
		printf("记得带伞哦");
	}
	else
	{
		printf("女神没空");
	}
		
	
	
	return 0;
}
