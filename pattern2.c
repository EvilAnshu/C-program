#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n%2==1 && n>1)
	{
	for(i=0;i<n/2+2;i++)
	{
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i*2+1;j++)
		{
			printf("@");
		}
		printf("\n");
	}
	for(i=0;i<n/2+1;i++)
	{
		for(j=n/2;j>i;j--)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		for(j=0;j<n;j++)
		{
			if(i==n/2)
			printf("@");
			else
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<n/2;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(j=n/2;j>i;j--)
		{
			printf("*");
		}
		for(j=0;j<n;j++)
		{
			printf(" ");
		}
		for(j=n/2;j>i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
else
printf("Enter an Odd Number Greater Than 1! thank you...");
}
