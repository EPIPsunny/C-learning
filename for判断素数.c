#include <stdio.h>

int main()
{
	int i, num,f;
	_Bool flag=1; 
	
	
	printf("������һ������");
	scanf("%d",&num);
	
	for (i=2;i<num/2;i=i+1)
	{
		if (num%i==0)
		{
			flag=0;
			f=i;
			printf("�ɱ�%d��\n",f); 
		
			
		}
	}
	if (flag)
	{
	
		printf("%d��һ��������\n",num);
	}
	else
	{
		printf("%d����һ������\n");
	}
	
	return 0;
}
