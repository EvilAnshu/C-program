/*
1 2 3 4 
5 6 7 8
9 10 11 12
*/
#include<stdio.h>
void main()
{
	int i,j,n=1;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
}
