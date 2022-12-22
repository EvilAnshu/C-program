//wap to find largest element of 2d array of size 3x2
#include<stdio.h>
void main()
{
	int i,j,arr[3][2],max;
	for(i=0;i<3;i++)
	{
		printf("Enter element of %d row :",i+1);
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	max=arr[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			if(max<arr[i][j])
			max=arr[i][j];
		}
	}
	printf("largest element of array : %d",max);
}
