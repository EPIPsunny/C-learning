#include <stdio.h>

int main()
{
	int count=0;
    printf("�������ַ����м���\n");
	while (getchar()!='\n')//������Ĳ��ǻس���ʱ���У�����س������� 
	{
		count=count+1;
	}
	printf("��������%d���ַ�",count);
	
	return 0;
 } 
