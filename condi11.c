//wap to check a number is divisible by 2 and 3 or not
#include<stdio.h>
void main()
{
	int a;
	printf("Enter a number : ");
	scanf("%d",&a);
	a%2==0?(a%3==0?printf("number is divisible by both 2 and 3"):printf("number is divisible by 2 but not 3")):(a%3==0?printf("number is divisible by 3 but not 2"):printf("number is not divisible by both 2 and 3"));
}
