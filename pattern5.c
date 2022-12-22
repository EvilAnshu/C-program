#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	for(i=0;i<n/2+2;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(j=0;j<n+2-i*2;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<n+2;i++)
	{
		for(j=0;j<n/2+2;j++)
		{
			if(j<n/2+1)
			printf(" ");
			else
			printf("@");
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n+1;j++)
		{
			if(j==0)
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}
}
