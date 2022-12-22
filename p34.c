/*
1 2 4 7 11
1 2 4 7 11
1 2 4 7 11
*/
#include<stdio.h>
void main()
{
	int i,j,n;
	for(i=1;i<=3;i++)
	{
		n=1;
		for(j=0;j<=4;j++)
		{
			n=n+j;
			printf("%d ",n);
		}
		printf("\n");
	}
}
