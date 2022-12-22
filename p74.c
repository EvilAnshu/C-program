//wap to input a 3*4 array and print all (even index rows) elements
#include<stdio.h>
void main()
{
	int arr[3][4],i,j;
	for(i=0;i<3;i++)
	{
		printf("Enter Element of %d row : ",i+1);
		for(j=0;j<4;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		if(i%2==0)
		{
			for(j=0;j<4;j++)
			{
				printf("%d ",arr[i][j]);
			}
		}
		printf("\n");
	}	
}
