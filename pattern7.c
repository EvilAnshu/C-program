#include<stdio.h>
void main()
{
	int i,j,n=11;
	for(i=0;i<n/2+1;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" ");
		}
		for(j=n/2;j>i;j--)
		{
			printf(" ");
		}
		for(j=0;j<2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<n-2;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" ");
		}
		for(j=0;j<n;j++)
		{
			if(j==0 || j==n-1)
			printf("@");
			else
			printf(" ");
		}
		printf("\n");
	}
	for(i=0;i<n/2+1;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(j=0;j<n-i*2;j++)
		{
			printf("*");
		}
		for(j=0;j<i+1;j++)
		{
			if(i==0)
			printf("@");
			else
			printf(" ");
		}
		for(j=0;j<n-2;j++)
		{
			printf(" ");
		}
		for(j=0;j<i+1;j++)
		{
			if(i==0)
			printf("@");
			else
			printf(" ");
		}
		for(j=0;j<n-i*2;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
