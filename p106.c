//wap to reverse a value of variable by using udf
#include<stdio.h>
void reverse(int *num);
void reverse(int *num)
{
	int rev=0;
	for(;*num>0;*num=*num/10)
	{
		rev=rev*10+((*num)%10);
	}
	*num=rev;
}
void main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	reverse(&n);
	printf("value of variable is : %d",n);
}
