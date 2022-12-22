#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n=3;
	for(i=0;i<=n/2+1;i++)
	{
		for(j=0;j<n/2+1;j++)
		{
			if(j<i)
			printf("@");
			else
			printf(" ");
		}
		for(j=0;j<n+2;j++)
		{
			if(i==n/2+1)
			printf("*");
			else
			printf(" ");
		}
		for(j=0;j<n+2;j++)
		{
			printf("@");
		}
		printf("\n");
	}
	for(i=n/2;i>=0;i--)
	{
		for(j=0;j<n/2+1;j++)
		{
			if(j<i)
			printf("@");
			else
			printf(" ");
		}
		for(j=0;j<n+2;j++)
		{
			if(i==n/2+1)
			printf("*");
			else
			printf(" ");
		}
		for(j=0;j<n+2;j++)
		{
			printf("@");
		}
		printf("\n");
	}
}
