#include <stdio.h>

int main()
{
	int i; 
	printf("��������ѧ�����˶��ٷ�");
	scanf("%d",&i);
	if(i>=90&&i<=100)
	{
		printf("�ɼ�����ΪA"); 
	 } 
	 
	else if(i>=80&&i<90)
	{
		printf("�ɼ�����ΪB"); 
	}
	else if(i>=70&&i<80)
	{
		printf("�ɼ�����ΪC"); 
	}
	else if(i>=60&&i<70)
	{
		printf("�ɼ�����ΪD"); 
	}
	else if(i>=0&&i<60)
	{
		printf("�ɼ�����ΪE"); 
	}
	else
	{
		printf("�ɼ����벻��ָ����Χ");
	}
	return 0;
}

