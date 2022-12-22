// wap to create a udf to find reverse value of a number 
#include<stdio.h>
int reverse(int num);
void Polindrome(); //print all polindrome num within 1-1000
void main()
{
	Polindrome();
}

int reverse(int num)
{
	int rev=0,digit;
	for(num;num>0;num=num/10)
	{
		digit=num%10;
		rev=rev*10+digit;
	}
	return rev;
}
void Polindrome()
{
	int i;
	for(i=1;i<=1000;i++)
	{
	if(reverse(i)==i)
	printf("%d \t",i);
	}
}

