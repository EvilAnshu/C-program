//wap to search an element in array by using binary search(descending order)
#include<stdio.h>
void main()
{
	int a[10],num,mid,temp,i,j,start=0,end=9;
	printf("Enter 10 numbers of array :\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d \t",a[i]);
	}
	printf("\nEnter a number to search in array :\n");
	scanf("%d",&num);

	while(start<=end)
	{
		mid=(end+start)/2;
		if(a[mid]==num)
		{
			printf("Search successful...");
			break;
		}
		else if(num>a[mid])
		{
			end=mid-1;
		}
		else if(num<a[mid])
		{
			start=mid+1;
		}
	}
	if(start>end)
	{
		printf("%d is Not present in array...",num);
	}
}
