#include<stdio.h>
void main()
{
	int n=10;
	int b=n++ + n++;
	printf("b = %d , n = %d\n",b,n);
	fun1();
	fun2();
	fun3();
	fun4();
}
fun1()
{
	int a=5,b=10,c;
	c=a++ + ++b;
	printf("a = %d , b = %d , c = %d\n",a,b,c);
}
fun2()
{
	int a=10,b;
	b=++a + ++a;
	printf("a = %d , b = %d \n",a,b);
}
fun3()
{
	int a=5,b,c=10;
	b=++a + a++ + ++c +a++;
	printf("a = %d , b = %d , c = %d\n",a,b,c);
}
fun4()
{
	int a=10,b;
	b=a++ + --a + a--;
	printf("a = %d , b = %d\n",a,b);
}
