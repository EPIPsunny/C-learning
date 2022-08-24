#include <stdio.h>

int main()
{
	char a='f';
	int f = 123;
	
	char *pa=&a;
	int *pb=&f;
	
	printf("a=%c\n",*pa);
	printf("b=%d\n",*pb);
	
	return 0;
}
