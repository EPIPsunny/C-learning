#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "Original String";//���Զ���ȡ���� 
	char str2[] = "New String";
	char str3[100];
	
	strcpy(str1,str2);//��2���Ƶ�1 ��ע��1�ĳ���Ҫ����2�ĳ��ȣ����������� 
	strcpy(str3,"copy successful");
	
	printf("str1:%s\n",str1);
	printf("str2:%s\n",str2);
	printf("str3:%s\n",str3);
	
	return 0;
 } 
