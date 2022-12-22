//wap to check number is palindrome or not
#include<stdio.h>
void main()
{
	int n,sum=0,temp;
	printf("Enter a Number : ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		sum=sum*10+n%10;
		n=n/10;
	}
	if(temp==sum)
	printf("%d is a palindrome number",temp);
	else
	printf("%d is Not a palindrome number",temp);
}
