//wap to input n elements of array and check how many times a given number is present
#include<stdio.h>
void main()
{
	int n,i,arr[100],num,count=0;
	printf("Enter Number of elements : ");
	scanf("%d",&n);
	printf("Enter %d numbers : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter a number for search in array : ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			count += 1;
		}
	}
	printf("%d present in array %d times..",num,count);
}
