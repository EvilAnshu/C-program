#include<stdio.h>
void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num%2==0 && num%3!=0 && num%5!=0)
	{
		printf("Number is Divisible by 2 but not 3 and 5");
	}
	else if(num%2==0 && num%3==0 && num%5!=0)
	{
		printf("Number is Divisible by 2 and 3 but not 5");
	}	
	else if(num%2==0 && num%3==0 && num%5==0)
	{
		printf("Number is Divisible by 2 , 3 and 5");
	}
	else if(num%2!=0 && num%3==0 && num%5!=0)
	{
		printf("Number is Divisible by 3 but not 2 and 5");
	}
	else if(num%2!=0 && num%3==0 && num%5==0)
	{
		printf("Number is Divisible by 3 and 5 but not 2");
	}	
	else if(num%2!=0 && num%3!=0 && num%5==0)
	{
		printf("Number is Divisible by 5 but not 2 and 3");
	}
	else if(num%2!=0 && num%3!=0 && num%5!=0)
	{
		printf("Number is not Divisible by 2 , 3 and 5");
	}
}
