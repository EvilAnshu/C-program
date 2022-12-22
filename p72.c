//wap to input 10 elements of array and seprate even element in a array and odd element in another array
#include<stdio.h>
void main()
{
	int arr[10],even[10],odd[10],i,j=0,k=0;
	printf("Enter 10 elements of array : \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			even[j]=arr[i];
			j++;
		}
		else
		{
			odd[k]=arr[i];
			k++;
		}
	}
	if(j>0)
	{
		printf("Even array elements are :\n[\t");
		for(i=0;i<j;i++)
		{
			printf("%d\t",even[i]);
		}
		printf("]");
	}
	if(k>0)
	{
		printf("\nOdd array elements are :\n[\t");
		for(i=0;i<k;i++)
		{
			printf("%d\t",odd[i]);
		}
		printf("]");
	}
}
