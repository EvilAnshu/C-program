// wap to create a udf to Number of digits in a number
#include<stdio.h>
int digit(int num);
void main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("number of digits : %d",digit(num));
}
int digit(int num)
{
	int count=0;
	for(num;num>0;num=num/10)
	{
		count += 1;
	}
	return count;
}
