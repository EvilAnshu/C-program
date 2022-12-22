//wap to input a number and print reverse of the number
#include<stdio.h>
void main()
{
	int last,n,sum=0;
	printf("Enter a number... : ");
	scanf("%d",&n);
	for(n;n>0;n=n/10)
	{
		last=n%10;
		sum=sum*10+last;
	}
	printf("reverse of number : %d",sum);
}
