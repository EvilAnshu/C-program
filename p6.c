//wap to input a number to check the number is divisible by 2 ,3 and 5 or not
#include<stdio.h>
void main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	if(n%2==0 && n%3==0 && n%5==0)
	printf("Number is divisible by 2 , 3 and 5");
	else if(n%2==0 && n%3==0 && n%5!=0)
	printf("Number is divisible by 2 , 3 but not by 5");
	else if(n%2==0 && n%3!=0 && n%5!=0)
	printf("Number is divisible by 2 but not by 3 and 5");
	else if(n%2!=0 && n%3!=0 && n%5!=0)
	printf("Number is not divisible by 2 , 3 and 5");
	else if(n%2==0 && n%3!=0 && n%5==0)
	printf("Number is divisible by 2 and 5 but not by 3");
	else if(n%2!=0 && n%3==0 && n%5==0)
	printf("Number is not divisible by 3 , 5 but not by 2");
	else if(n%2!=0 && n%3==0 && n%5!=0)
	printf("Number is not divisible by 3 but not by 2 and 5");
	else if(n%2!=0 && n%3!=0 && n%5==0)
	printf("Number is not divisible by 5 but not by 2 and 3");
}
