//wap to count how many numbers are even within 2 to n
#include<stdio.h>
void main()
{
	int i,count=0,n;
	printf("Enter last digit of series... : ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(i%2==0)
		count=count+1;
	}
	printf("%d ",count);
}
