#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n=5;
	for(i=0;i<n/2+2;i++)
	{
		for(j=i;j<n/2+1;j++)
		printf(" ");
		for(j=0;j<=i;j++)
		printf("@");
		for(j=0;j<n+2;j++)
		{
			if(i==n/2+1)
			printf("*");
			else
			printf(" ");
		}
		for(j=0;j<n;j++)
		{
			(i==0)?printf(" "):printf("@");
		}
		printf("\n");
	}
	for(i=n/2;i>=0;i--)
	{
		for(j=i;j<n/2+1;j++)
		printf(" ");
		for(j=0;j<=i;j++)
		printf("@");
		for(j=0;j<n+2;j++)
		{
			if(i==n/2+1)
			printf("*");
			else
			printf(" ");
		}
		for(j=0;j<n;j++)
		{
			(i==0)?printf(" "):printf("@");
		}
		printf("\n");
	}
}
