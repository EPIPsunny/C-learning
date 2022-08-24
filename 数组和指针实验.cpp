#include <stdio.h>
int main()
{
	int a[10]{0,1,2,3,4,5,6,7,8,9},
	*p=a;
	
	printf("%d\n",*(p+1));
	printf("%d\n",a[1]);
	printf("%d\n",p[1]);
	printf("%d\n",p[1]);
	
	return 0;
}
