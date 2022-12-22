//wap to input 6 subject marks and print the marks that is greater than avarage

/*
---------------------------------
enter 6 subject marks
1 2 3 4 5 6 =21/6=3.5

4 5 6 is greater than avarage
---------------------------------
*/

#include<stdio.h>
void main()
{
	int arr[6],i,sum=0;
	printf("Enter 6 subject of marks : ");
	for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	printf("sum is : %d and avarage is %f \n",sum,sum/6.0);
	for(i=0;i<6;i++)
	{
		if(sum/6.0<arr[i])
		{
			printf("%d ",arr[i]);
		}
	}
		printf("is greater than avarage");
}
