//wap to find sum of all even digit of a given number
#include<stdio.h>
void main()
{
	int n,sum=0,digit;
	printf("Enter a Number : ");
	scanf("%d",&n);
	while(n>0)
	{
		digit=n%10;
		if(digit%2==0)
		 sum=sum+digit;
		n=n/10;
	}
	printf("sum of even digits : %d",sum);
}
