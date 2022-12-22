//wap to input 10 elements of array and find largest element of array
#include<stdio.h>
void main()
{
	int arr[10],larg,i;
	printf("Enter 10 Numbers of array : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	larg=arr[0];
	for(i=0;i<10;i++)
	{
		if(larg<arr[i])
		{
			larg=arr[i];
		}
	}
		printf("%d is largest element of array..",larg);
}
