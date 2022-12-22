#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n=7;
	for(i=0;i<n/2+1;i++)
	{
		for(j=0;j<i+n/2;j++)
		{
			printf(" ");
		}
		for(j=0;j<n-(2*i);j++)
		{
			printf("@");
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0 || j==0 ||j==n-1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
