//wap to input 10 elements of array and arrange elements of array in ascending order
#include<stdio.h>
void main()
{
	int arr[10],i,temp,j;
	printf("Enter 10 Numbers of array : ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(j=0;j<9;j++)
	{	
		for(i=0;i<9-j;i++)
		{
			if(arr[i]>arr[i+1])
			{
				temp=arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
}
