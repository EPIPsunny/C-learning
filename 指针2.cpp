#include <stdio.h>
int main()
{
	char s[]="abf";
	char *p=s;
	//printf("%c\n",s[2]);
	printf("%c%c%c",*p,*p++,*p++);
	
	
	
	return 0;
 } 
