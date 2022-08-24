#include <stdio.h>

int main()
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};//一个大括号表示一行，不足填0 ，仅可第一维度不写多少个 
	int i,j;
	
	for (i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
 } 
