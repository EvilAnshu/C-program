// waf to find factorial of a given number

#include<stdio.h>
int factorial(int);
int factorial(int n)
{
	int i;
	int fact=1;
	for(i=1;i<=n;i++)
	fact=fact*i;
	return(fact);
}

void main()
{
	int n,a;
	printf("Enter number : ");
	scanf("%d",&n);
	a=factorial(n);
	printf("factorial = %d",a);
	
}

