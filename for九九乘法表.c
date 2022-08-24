#include <stdio.h>

int main()
{
	int a,b,c;
	
	for(a=1;a<=9;a++)
	{
		for(b=1;b<=a;b++)
		{
			c=a*b;
			printf("%d*%d=%-2d    ",a,b,c);// 长度为2，左对齐 
		}
		printf("\n");
	}
	
	
	
	return 0;
}
