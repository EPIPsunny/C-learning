#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,m,n;
	char A[m];
	char B[n];
	
	printf("�������һ���ַ���������");
	scanf("%d",&m);
	printf("�������һ���ַ�����");
	getchar();
	for(i=0;i<m;i++)
	{
		scanf("%c",&A[i]);
	}
	printf("������ڶ����ַ�������");
	scanf("%d",&n) ;
	printf("������ڶ����ַ�����");
	getchar();
	for(j=0;j<n;j++)
	{
		scanf("%c",&B[j]);
	}
	 
	
	
	if(!strcmp(A,B))//�Ƚ���������ͬΪ0����ͬΪ������ 
	{
		printf("��ͬ"); 
	}
	else
	{
		printf("��ͬ");
	}
	
	return 0;
 } 
