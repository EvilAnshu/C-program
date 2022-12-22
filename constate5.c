//Enter your electricity unit and print total bill amount
//0-100 : 8rs/unit
//101-200 : 10rs/unit
//>200 : 12rs/unit
#include<stdio.h>
void main()
{
	int el;
	printf("Enter Your Electricity unit : ");
	scanf("%d",&el);
	if(el>0 && el<=100)
	{
		printf("your bill amount : %d",el*8);
	}
	else if(el>100 && el<=200)
	{
		printf("your bill amount : %d",el*10);
	}
	else if(el>200)
	{
		printf("your bill amount : %d",el*12);
	}
	else
	{
		printf("Enter a vaild value...");
	}
}
