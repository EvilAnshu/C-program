//wap to input your age and print you are eligible to vote or not
#include<stdio.h>
void main()
{
	int a;
	printf("Enter Your Age : ");
	scanf("%d",&a);
	printf(a>=18?"Eligible for Vote":"Not Eligible for Vote");
}
