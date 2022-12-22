/*wap to input your electricity unit and print total bill amount;
unit >=200 : then charge @10rs
oterwise : then charge @5rs
*/
#include<stdio.h>
void main()
{
	float a;
	printf("Enter total unit : ");
	scanf("%f",&a);
	printf("Your Bill : %f",a>=200?a*10:a*5);
}
