#include<stdio.h>
void main()
{
	int i,n,a,b;
	printf("Enter First Number of series.. : ");
	scanf("%d",&i);
	printf("Enter last Number of series.. : ");
	scanf("%d",&n);
	if(i>n)
	for(i;i<=n;i++)
	{
		printf("%d ",i);
	}
	else if(i<n)
	for(i;i>=n;i--)
	{
		printf("%d ",i);
	}
	else
	printf("Both values are equal, it is must to enter a range ...\n");
}
