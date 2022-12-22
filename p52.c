//wap to calculate ncr value
#include<stdio.h>
int fact(int num);
void main()
{
	int n,r,ncr;
	printf("Enter value of n and r : ");
	scanf("%d%d",&n,&r);
	ncr=fact(n)/(fact(r)*fact(n-r));
	printf("ncr of n= %d and r= %d : ",n,r,ncr);
}
int fact(num)
{
	int fact=1;
	for(num;num>=1;num--)
	{
		fact=fact*num;
	}
	return fact;
}
