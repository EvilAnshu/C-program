#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n=5;
	for(i=0;i<n/2+2;i++)
	{
		for(j=0;j<n/2+1;j++)
		{
			if(j>=i)
			printf(" ");
			else
			printf("@");
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
	// bellow code
	for(i=n/2;i>=0;i--)
	{
		for(j=0;j<n/2+1;j++)
		{
			if(j>=i)
			printf(" ");
			else
			printf("@");
		}
		for(j=0;j<n+2;j++)
		{
			printf(" ");
		}
		for(j=0;j<n+2;j++)
		{
			printf("@");
		}
		printf("\n");
	}
}
