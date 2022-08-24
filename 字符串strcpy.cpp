#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "Original String";//会自动读取长度 
	char str2[] = "New String";
	char str3[100];
	
	strcpy(str1,str2);//将2复制到1 ，注意1的长度要大于2的长度，否则塞不下 
	strcpy(str3,"copy successful");
	
	printf("str1:%s\n",str1);
	printf("str2:%s\n",str2);
	printf("str3:%s\n",str3);
	
	return 0;
 } 
