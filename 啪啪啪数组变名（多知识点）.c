#include <stdio.h>

int main()
{
	int n,i;
	printf("请输入字符个数：");
	scanf("%d",&n);//此时屏幕缓冲区会有回车
	
	char a[n+1];//最有要有\0表示字符串读取完毕
	
	printf("请开始输入字符：");
	getchar() ;//将以上的回车忽略，避免进入一下输入的字符 
	
	for (i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	 } 
	 a[n]='\0';//表示字符串读取完毕，便于之后输出
	 printf("你输入的字符串是：%s\n",a);//字符串输出 
	 
	 return 0; 
	
	
}
