// wap to make a udf to find square of a number
#include<stdio.h>
int square(int num);
void main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Square of %d : %d",n,square(n));
}
int square(int num)
{
	 return num*num;
}
