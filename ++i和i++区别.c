#include <stdio.h>

int main()
{
	int i=5,j;
	
	j=++i;//���Լ�+1���ٸ�ֵ��j 
	printf("i=%d,j=%d\n",i,j);
	
	i=5;
	j=i++;//�Ȱ�iֵ��ֵ��j���Լ���+1 
	printf("i=%d,j=%d\n",i,j);
	
	return 0;
 } 
