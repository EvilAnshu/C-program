/*
1234
2345
3456
4567
*/
#include<stdio.h>
void main()
{
	int i,j,n;
	for(i=1;i<=4;i++)
	{
		n=i;
		for(j=1;j<=4;j++)
		{
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
}
