//wap to find largest element of given n numbers
#include<stdio.h>
void main()
{
	int n,i,arr[100],num;
	printf("Enter Number of elements : ");
	scanf("%d",&n);
	printf("Enter %d numbers : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	num=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>num)
		{
			num=arr[i];
		}
	}
	printf("%d is the largest number of array..",num);
}
