//wap to input year(2022) and print this year is a leap year or not
#include<stdio.h>
void main()
{
	int a;
	printf("Enter Year to check : ");
	scanf("%d",&a);
	printf(a%4==0?"Leap Year":"Not a Leap year");
}
