//wap to find product of 2 numbers only if all numbers are zero
#include<stdio.h>
void main()
{
	int n1,n2;
	printf("Enter two numbers : ");
	scanf("%d%d",&n1,&n2);
	if(n1!=0 && n2!=0)
	{
		printf("Result is : %d",n1*n2);
	}
}
