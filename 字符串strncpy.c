#include <stdio.h>
#include <string.h>

int main()
{
	char str1[]="To be or not to be";
	char str2[40];
	
	strncpy(str2,str1,5);//strncpy限制5个拷贝的字符,不包括\'0' 
	str2[5]='\0';//第6个字符赋值位'\0'表示字符串结束
	
	printf("str2: %s\n",str2); 
	
	return 0;
 } 
