/*
5 5 5 5
4 4 4
3 3
2
*/
#include<stdio.h>
void main()
{
	int i,j;
	for(i=5;i>=2;i--)
	{
		for(j=1;j<=i-1;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
