//wap to print table
#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter a number to print table : ");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("%d \n",i*n);
		i++;
	}
}
