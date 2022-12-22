//find digits of the number and find the sum of digits
#include<stdio.h>
void main()
{
	int last,n,sum=0;
	printf("Enter a number... : ");
	scanf("%d",&n);
	for(n;n>0;n=n/10)
	{
		last=n%10;
		printf("%d \n",last);
		sum=sum+last;
	}
	printf("%d ",sum);
}
