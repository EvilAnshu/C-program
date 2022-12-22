//wap to swap two numbers without using third variable
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two values : ");
	scanf("%d%d",&a,&b); //a=5 b=4
	printf("Before swap value of Num1= %d and Num2= %d\n",a,b);
	a=a+b; //a=9
	b=a-b; //b=5
	a=a-b; //a=4
	printf("After swap value of Num1= %d and Num2= %d",a,b);
}
