#include <stdio.h>
#include <string.h>//使用字符串函数头文件

int main()
{
	char str[] = "I love FishC!";
	
	printf("sizeof str = %d\n",sizeof(str));//尺寸多一个\0 
	printf("strlen str = %u\n",strlen(str));//strlen是读取长度 
	
	return 0;
}

 
