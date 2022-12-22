//wap to store 10 numbers from keyboard then print all the numbers in reverse order
#include<stdio.h>
void main()
{
	int a[10],b,i;
	for(i=0;i<10;i++)
	{
		printf("Enter %d element of array : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		/*
		
		//using 3rd variable
		
		b=a[i];
		a[i]=a[9-i];
		a[9-i]=b;
		*/
		
		//without using 3rd variable
		a[i]=a[i]+a[9-i];
		a[9-i]=a[i]-a[9-i];
		a[i]=a[i]-a[9-i];
	}
	for(i=0;i<10;i++)
	{
		printf("%d th element of array with index %d : %d\n",i+1,i,a[i]);
	}
}
