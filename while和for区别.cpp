#include <stdio.h>
int main()

{
	int i;//����Ϊ��ѭ�� ����Ϊfor�򲻻� 
	
	i=0;
	while(i<100)//��Ϊ for(i=0;i<100;i++)
	{
		if(i%2)
		{
			continue;//ֱ������ѭ��β�� 
		}
		i++;//ȥ�� 
	}
	
	return 0; 
}
