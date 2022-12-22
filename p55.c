//wap to create a udf to add 2 numbers
#include<stdio.h>
int add();
void main()
{
	printf("sum : %d",add());
}
int add()
{
	int n,r;
	printf("Enter two numbers : ");
	scanf("%d%d",&n,&r);
	return n+r;
}
