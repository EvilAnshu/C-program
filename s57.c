//wap to find sum of even elements of 2d array of size 4x4
#include<stdio.h>
void main()
{
	int i,j,arr[4][4],sum=0;
	for(i=0;i<4;i++)
	{
		printf("Enter element of %d row :",i+1);
		for(j=0;j<4;j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]%2==0)
			{
				sum += arr[i][j];
			}
		}
	}
	printf("sum of element of array : %d",sum);
}
