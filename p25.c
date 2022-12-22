//wap to input a number and check number is polindrome or not
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
		sum=sum*10+last;
	}
	if(temp==sum)
	{
		printf("Number is Polindrome");
	}
	else
	{
		printf("Number is not Polindrome");
	}
}
