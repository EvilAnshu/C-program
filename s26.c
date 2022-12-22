#include<stdio.h>
void main()
{
	char i,j,n='A';
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c ",n);
			n++;
		}
		printf("\n");
	}
}
