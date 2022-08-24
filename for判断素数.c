#include <stdio.h>

int main()
{
	int i, num,f;
	_Bool flag=1; 
	
	
	printf("请输入一个整数");
	scanf("%d",&num);
	
	for (i=2;i<num/2;i=i+1)
	{
		if (num%i==0)
		{
			flag=0;
			f=i;
			printf("可被%d除\n",f); 
		
			
		}
	}
	if (flag)
	{
	
		printf("%d是一个素数！\n",num);
	}
	else
	{
		printf("%d不是一个素数\n");
	}
	
	return 0;
}
