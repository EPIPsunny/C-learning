#include <stdio.h>

int main()
{
	char ch;
	printf("������ɼ�����");
	scanf("%c",&ch);//ע��ֺ�λ�� 
	
	switch (ch)
	{
		case 'a':printf("����\n");break;//switch���ֻ�����벻����������Ҫbreak���� 
		case 'b':printf("����\n");break;
		case 'c':printf("��\n");break;
		default:printf("����\n");break;
		
	}
	 
	
	return 0;
}
