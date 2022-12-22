//wap to input a 3*5 array and sort each row in ascending order
#include<stdio.h>
void main()
{
	int a[3][5],i,j,k,temp;
	for(i=0;i<3;i++)
	{
		printf("Enter element of %d row :\n",i+1);
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(k=0;k<4;k++)
		{
			for(j=k+1;j<5;j++)
			{
				if(a[i][j]<a[i][k])
				{
					temp=a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=temp;
				}
			}
		}
	}
	printf("Arranged 2d array is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
