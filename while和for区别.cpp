#include <stdio.h>
int main()

{
	int i;//以下为死循环 ，改为for则不会 
	
	i=0;
	while(i<100)//改为 for(i=0;i<100;i++)
	{
		if(i%2)
		{
			continue;//直接跳到循环尾了 
		}
		i++;//去掉 
	}
	
	return 0; 
}
