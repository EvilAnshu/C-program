//wap to create a udf to add 2 numbers
#include<stdio.h>
int add(int n,int r);
void main()
{
	int n,r;
	printf("Enter two numbers : ");
	scanf("%d%d",&n,&r);
	printf("Sum of %d and %d : %d",n,r,add(n,r));
}
int add(n,r)
{
	return n+r;
}
