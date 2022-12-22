//wap to create a udf to add 2 numbers
#include<stdio.h>
void add();
void main()
{
	add();
}
void add()
{
	int n,r;
	printf("Enter two numbers : ");
	scanf("%d%d",&n,&r);
	printf("Sum of %d and %d : %d",n,r,n+r);
}
