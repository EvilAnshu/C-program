//wap to input a 3*3 matrix and check given matrix is a identity matrix or not
#include<stdio.h>
void main()
{
	int a[3][3],i,j,count=0;
	for(i=0;i<3;i++)
	{
		printf("Enter element of %d row :\n",i+1);
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if((i==j && a[i][j]!=1) || (i!=j && a[i][j]!=0))
			{
				count = 1;
				break;
			}
		}
		if(count==1)
		{
			break;
		}
	}
	if(count==0)
	{
		printf("This is an identity matrix...");
	}
	else
	{
		printf("This is not identity matrix...");
	}
}
