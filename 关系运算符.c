#include <stdio.h>

int main()
{
	int a = 5, b = 3;
	printf("%d\n", 1 < 2);
	printf("%d\n", a>b ); 
	printf("%d\n", a<=b+1);
	printf("%d\n",'a'+'b'<='c');
	printf("%d\n",(a=3)>(b=5));
	printf("--------------\n");
	printf("%d\n",3>1&&1<2); //�룬
	printf("%d\n",3+1||2==0);// ������ʱ0Ϊ�񣬷�0Ϊ��  
	printf("%d\n",!(1+b));//�ǣ�ͬ�� 
	printf("%d\n",!0+1<1||!(3+4));//0Ϊ�񣬣�0Ϊ�棬��1 
	printf("%d\n",'a'-'b'&&'c');//a��asc��Ϊ97��bΪ98��c��99
	//��·��ֵ
	printf("=============\n");
	 
	 int c=3,d=3;
	 (c=0)&&(d=5);
	 printf("c=%d,d=%d\n",c,d);//����Ϊ�룬���0����ȷ���ұ߲����㣬����c=0��d=3 
	 
	 (c=1)||(d=5);
	 printf("c=%d,d=%d\n",c,d);//Ϊ����߸�1����0����ȷ���ұ��������㣬����c=1��d=3 
	
	return 0;
}
