//wap to check number is armstrong or not
#include<stdio.h>
void main()
{
	int n,sum=0,temp;
	printf("Enter a Number : ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		sum=sum+(n%10)*(n%10)*(n%10);
		n=n/10;
	}
	if(temp==sum)
	printf("%d is a armstrong number",temp);
	else
	printf("%d is Not a armstrong number",temp);
}
