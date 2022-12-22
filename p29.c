/*
8 8 8 
7 7 7 
6 6 6 
5 5 5 
*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=8;i>=5;i--)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
