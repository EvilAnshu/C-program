//wap to input a number and print all digit of number in seprate line
#include<stdio.h>
void main()
{
	int last,n;
	printf("Enter a number... : ");
	scanf("%d",&n);
	for(n;n>0;n=n/10)
	{
		last=n%10;
		printf("%d\n",last);
	}
	
}
