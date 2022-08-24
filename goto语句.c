#include <stdio.h>

int main() 
{
	int i=0;
	while (++i)//break只能跳一层，goto可以一步到位，但要少用 ,此处若是i++则输出1 
	{
		if (i>10)/*我就
		           跨个
		             行 */ 
		{
		      goto A;
		}
	}
A:printf("here,i=%d\n",i);
	
	return 0;
}
