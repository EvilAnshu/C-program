// wap to create a udf to check a number is prime or not
#include<stdio.h>
int prime(int num);
//return 1 if prime
// return 0 if not prime
// use this udf to find all prime number within 1 to 1000
void main()
{
	int i;
	for(i=1;i<=1000;i++)
	{
	if(prime(i)==0)
		printf("%d\t",i);
	}
}
int prime(int num)
{
	int i,count=0;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			count=1;
			break;
		}
	}
	if(count==1)
		return 1;
	else
		return 0;
}
