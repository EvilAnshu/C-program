//wap to input a number and check number is Armstrong or not
#include<stdio.h>
void main()
{
	int last,n,sum=0,temp;
	printf("Enter a number... : ");
	scanf("%d",&n);
	temp=n;
	for(n;n>0;n=n/10)
	{
		last=n%10;
		sum=sum+last*last*last;
	}
	if(temp==sum)
	{
		printf("Number is Armstrong");
	}
	else
	{
		printf("Number is not Armstrong");
	}
}
