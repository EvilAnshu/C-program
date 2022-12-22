//wap to print all armstrong numbers between 100 and 1000
#include<stdio.h>
void main()
{
	int i,n=100,sum;
	for(i=100;i<1000;i++)
	{
		sum=0;
		n=i;
		while(n>0)
		{
			sum=sum+(n%10)*(n%10)*(n%10);
			n=n/10;
		}
		if(i==sum)
			printf("%d\t",i);
	}
}
