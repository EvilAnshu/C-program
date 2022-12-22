/*
8 8 8 8
6 6 6 6 
4 4 4 4 
2 2 2 2 
*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=8;i>=2;i=i-2)
	{
		for(j=1;j<=4;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
