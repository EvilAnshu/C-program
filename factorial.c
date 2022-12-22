#include<stdio.h>
void main()
{
	int i,fact=1;
	printf("Enter a number to find factorial.. : ");
	scanf("%d",&i);
	for(i;i>1;i--)
	{
		fact=fact*i;
	}
	printf("%d ",fact);
}
