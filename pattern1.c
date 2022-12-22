#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,x=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	int flag=0;
	for(i=0;i<n*2;i++)
	{
		if(i<=n)
			printf("@");
		else
		printf(" ");
		for(j=0;j<n*(n-1)+1;j++)
		{
			if(i>=n/2 && i<2*n-n/2)
			{
				if(j<(n-1)*x || j>(n-1)*x+n-1)
				printf(" ");
				else
				printf("*");
				flag=1;
			}
			else
			{
				printf(" ");
			}
		}
		if(flag)x++;
		if(i>=n-1 && i<n*2)
			printf("@");
		else
		printf(" ");
		printf("\n");
	}
}
