//wap to store n numbers dynamically then find sum of all the numbers.
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,sum=0,i,*p;
	printf("Enter no. of elements to store : ");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("Enter all elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
		sum=sum+*(p+i);
	}
	printf("sum of all numbers : %d",sum);
}
