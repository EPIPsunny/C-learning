#include <stdio.h>

int main() 
{
	int i=0;
	while (++i)//breakֻ����һ�㣬goto����һ����λ����Ҫ���� ,�˴�����i++�����1 
	{
		if (i>10)/*�Ҿ�
		           ���
		             �� */ 
		{
		      goto A;
		}
	}
A:printf("here,i=%d\n",i);
	
	return 0;
}
