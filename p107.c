// wap to sort a array by using udf
#include<stdio.h>
void sort(int *ptr);
void sort(int *ptr)
{
	int i,temp,j;
	for(j=0;j<9;j++)
	{
		for(i=j+1;i<10;i++)
		{
			if(*(ptr+i)<*(ptr+j))
			{
				temp=*(ptr+j);
				*(ptr+j)=*(ptr+i);
				*(ptr+i)=temp;	
			}
		}
	}
}
void main()
{
	int arr[10],i;
	printf("Enter 10 Element of array : ");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr);
	for(i=0;i<=9;i++)
	{
		printf("%d\t",arr[i]);
	}
}
