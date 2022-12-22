//wap to input two numbers and print product if all values are non-zero
//if any is zero : In product both values should be non-zero
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	a>0 && b>0?printf("both values are greater than 0 and product : %d",a*b):printf("Values are zero");
}
