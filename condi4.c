//wap to input a number and check number is divisible by 3 and 5 both or not
#include<stdio.h>
void main()
{
	int a;
	printf("Enter A number to check : ");
	scanf("%d",&a);
	printf(a%3==0 && a%5==0?"Number is Divisible by 3 and 5":"Number is not divisible");
}
