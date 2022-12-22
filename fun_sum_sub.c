// wap to create following udf
#include<stdio.h>
void sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
void div(int a, int b);

void main()
{
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	sum(a,b);
	printf("subtraction : %d\n",sub(a,b));
	printf("multiplication : %d\n",mul(a,b));
	div(a,b);
}
void sum(int a, int b)
{
	printf("sum : %d\n",a+b);
}
int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
void div(int a, int b)
{
	printf("division : %d\n",a/b);
}
