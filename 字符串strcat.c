#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "I love";
	char str2[] = "Fish";
	
	strcat(str1," ");//连接字符，连接一个空格给1 ，自动添加\'0',strncat需手动 
	strcat(str1,str2);//连接2给1 
	
	printf("str1: %s\n",str1);
	 
	
	return 0;
}
