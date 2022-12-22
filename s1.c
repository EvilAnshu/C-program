//wap to enter a number and check number is positive , negative or zero..
#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number : ");
	scanf("%d",&a);
	if(a>0)
	printf("it is positive..");
	else if(a<0)
	printf("it is negative..");
	else
	printf("it is zero..");
}
