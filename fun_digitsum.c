// wap to create a udf to return the sum of digits of a number
#include<stdio.h>
int digitsum(int num);
void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("sum of digits : %d",digitsum(num));
}
int digitsum(int num)
{
	int sum=0;
	for(num;num>0;num=num/10)
	{
		sum=sum+num%10;
	}
	return sum;
}
