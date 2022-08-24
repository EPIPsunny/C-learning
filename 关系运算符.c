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
	printf("%d\n",3>1&&1<2); //与，
	printf("%d\n",3+1||2==0);// 或，输入时0为否，非0为真  
	printf("%d\n",!(1+b));//非，同上 
	printf("%d\n",!0+1<1||!(3+4));//0为否，！0为真，即1 
	printf("%d\n",'a'-'b'&&'c');//a的asc码为97，b为98，c是99
	//短路求值
	printf("=============\n");
	 
	 int c=3,d=3;
	 (c=0)&&(d=5);
	 printf("c=%d,d=%d\n",c,d);//由于为与，左边0不正确，右边不运算，所以c=0，d=3 
	 
	 (c=1)||(d=5);
	 printf("c=%d,d=%d\n",c,d);//为或，左边赋1（非0）正确，右边无需运算，所以c=1，d=3 
	
	return 0;
}
