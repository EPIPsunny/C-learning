#include <stdio.h>
#include <string.h>//ʹ���ַ�������ͷ�ļ�

int main()
{
	char str[] = "I love FishC!";
	
	printf("sizeof str = %d\n",sizeof(str));//�ߴ��һ��\0 
	printf("strlen str = %u\n",strlen(str));//strlen�Ƕ�ȡ���� 
	
	return 0;
}

 
