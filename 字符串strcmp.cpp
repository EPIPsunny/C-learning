#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,m,n;
	char A[m];
	char B[n];
	
	printf("请输入第一个字符串字数：");
	scanf("%d",&m);
	printf("请输入第一个字符串：");
	getchar();
	for(i=0;i<m;i++)
	{
		scanf("%c",&A[i]);
	}
	printf("请输入第二个字符串字数");
	scanf("%d",&n) ;
	printf("请输入第二个字符串：");
	getchar();
	for(j=0;j<n;j++)
	{
		scanf("%c",&B[j]);
	}
	 
	
	
	if(!strcmp(A,B))//比较两个，相同为0，不同为其他数 
	{
		printf("相同"); 
	}
	else
	{
		printf("不同");
	}
	
	return 0;
 } 
