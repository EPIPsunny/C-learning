#include <stdio.h>

int main()
{
	long long long a;
	char b;
	float c;
	double d;
	
	a = 520;
	b = 'F';
	c = 3.14;
	d = 3.141592653;
	
	printf("��C�����Ҵ�����2010���%d\n",sizeof a);
	printf("I love %cishC.com!\n",b);
	printf("Բ�����ǣ�%.2f\n",c);
	printf("��ȷ��С�����9λ��Բ������:\
%11.9f\n",d);
    return 0;
	
}
