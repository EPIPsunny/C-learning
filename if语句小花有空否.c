#include <stdio.h>

int main()
{
	char isRain,isFree;
	printf("�Ƿ��п�(Y/N)\n");
	scanf("%c",&isFree);
	
	getchar();//��һ��������س��󣬻س�����Ϊ�ַ�������һ��scanf���ô˹��˻س� 
	
	printf("�Ƿ�����(Y/N)\n");
	scanf("%c",&isRain);
	
	if(isFree=='Y')
	{
		if(isRain=='Y')
		printf("�ǵô�ɡŶ");
	}
	else
	{
		printf("Ů��û��");
	}
		
	
	
	return 0;
}
