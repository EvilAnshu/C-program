#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=10;i=i+2)
	{
		for(j=1;j<=10-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
