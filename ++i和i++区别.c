#include <stdio.h>

int main()
{
	int i=5,j;
	
	j=++i;//先自己+1，再赋值给j 
	printf("i=%d,j=%d\n",i,j);
	
	i=5;
	j=i++;//先把i值赋值给j，自己再+1 
	printf("i=%d,j=%d\n",i,j);
	
	return 0;
 } 
