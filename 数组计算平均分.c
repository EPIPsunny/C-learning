#include <stdio.h>

#define NUM 10 //ʹ�ú궨��NUM�����ڸ����� 
int main()

{
	int s[NUM];
	int i,sum = 0;
	
	for(i=0; i<10;i++)
	{
		printf("�������%dλͬѧ�ĳɼ�",i+1);
		scanf("%d",&s[i]);
		sum+=s[i];
	}
	printf("¼����ϣ��ôο���ƽ������%.2f\n",(double)sum/NUM);//�з�����ǿ��ת��˫���ȸ����� 
	
		for(i=0; i<10;i++)
	{
		printf("��%dλͬѧ�ĳɼ���%d\n",i+1,s[i]);
	}
    
	
	
 } 
