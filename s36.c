//wap to revrse a number
#include<stdio.h>
void main()
{
	int n,sum=0;
	printf("Enter a Number : ");
	scanf("%d",&n);
	while(n>0)
	{
		sum=sum*10+n%10;
		n=n/10;
	}
	printf("sum of digits : %d",sum);
}
