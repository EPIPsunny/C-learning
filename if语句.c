#include <stdio.h>

int main()
{
	int i;
	printf("写下您多大年龄：");
	scanf("%d",&i);
	
	if (i>=18)//无分号 
	{
		printf("进门左拐\n"); 
		
	}
	else
	{
		printf("滚");
	}
	
	return 0;
 } 
