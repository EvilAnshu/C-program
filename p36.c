/*
3	6	9	12	18
4	8	12	16	20
5	10	15	20	25
*/
#include<stdio.h>
void main()
{
	int i,j,n;
	for(i=3;i<=5;i++)
	{
		n=i;
		for(j=1;j<=5;j++)
		{
			printf("%d\t",n);
			n=n+i;
		}
		printf("\n");
	}
}
