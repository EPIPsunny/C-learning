#include <stdio.h>

int main()
{
	int count=0;
    printf("请输入字符进行计算\n");
	while (getchar()!='\n')//当输入的不是回车键时进行，输入回车键跳出 
	{
		count=count+1;
	}
	printf("您输入了%d个字符",count);
	
	return 0;
 } 
