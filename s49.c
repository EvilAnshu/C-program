//wap to store 20 numbers from keyboard and find sum of all the numbers
#include<stdio.h>
void main()
{
	int a[20],i,sum=0;
	for(i=0;i<20;i++)
	{
		printf("Enter %d element of array : ",i+1);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("sum : %d",sum);
}
