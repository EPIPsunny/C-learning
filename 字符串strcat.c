#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "I love";
	char str2[] = "Fish";
	
	strcat(str1," ");//�����ַ�������һ���ո��1 ���Զ����\'0',strncat���ֶ� 
	strcat(str1,str2);//����2��1 
	
	printf("str1: %s\n",str1);
	 
	
	return 0;
}
