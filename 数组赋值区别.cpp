#include <stdio.h>

int main()
{
	int a[10]={0};//均赋值0 ；若不赋值，则乱码 ；若只写1，则第一位是1，其他位是0；不同值则{3,1,7，}用逗号
	//指定初始化：{【3】=5，【7】=13} 
	int i;
	
	for (i=0;i<10;i++)
	{
		printf("%d、",a[i]);
	}
	
	
	
	return 0;
 } 
