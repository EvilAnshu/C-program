/*
wap to input your annual income and print your tax amount
annual income>500000 :then tax is 30% of annual income
oterwise : tax is 5% of annual income
*/
#include<stdio.h>
void main()
{
	float a;
	printf("Enter Your annual income : ");
	scanf("%f",&a);
	printf("%f",a>500000?(a*30)/100:(a*5)/100);
}
