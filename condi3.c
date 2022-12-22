//wap to input a number and check number is even or odd
#include<stdio.h>
void main()
{
	int a;
	printf("Enter A number to check : ");
	scanf("%d",&a);
	printf(a%2==0?"Number is Even":"Number is odd");
}
