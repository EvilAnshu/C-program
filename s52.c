//wap to find sum of given n numbers
#include<stdio.h>
void main()
{
	int n,i,sum=0,arr[100];
	printf("Enter Number of elements : ");
	scanf("%d",&n);
	printf("Enter %d numbers : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	printf("Sum : %d",sum);
}
