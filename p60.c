//wap to input 5 subject mark and find total and avarage
#include<stdio.h>
void main()
{
	int arr[5],i,total=0;
	printf("Enter marks of five subject: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		total += arr[i];
	}
	printf("Total marks : %d\n",total);
	printf("avarage : %f",total/5.0);
}
