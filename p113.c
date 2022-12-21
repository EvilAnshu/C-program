/*
///////////////

n=3

  @
 @@     @@@
@@@*****@@@
 @@     @@@
  @

///////////////////////

n=5

   @
  @@       @@@@@
 @@@       @@@@@
@@@@*******@@@@@
 @@@       @@@@@
  @@       @@@@@
   @       @@@@@
*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	if(n%2==1 && n>=3)
	{
	for(i=0;i<n/2+2;i++)
	{
		for(j=0;j<n/2+2;j++)
		{
			if(j<n/2+1-i)
			printf(" ");
			else
			printf("@");
		}
		for(j=0;j<n+2;j++)
		{
			if(i<n/2+1)
			printf(" ");
			else
			printf("*");
		}
		for(j=0;j<n;j++)
		{
			if(i>0)
			printf("@");
			else
			printf(" ");
		}
		printf("\n");
	}
	for(i=n/2;i>=0;i--)
	{
		for(j=0;j<n/2+2;j++)
		{
			if(j<n/2+1-i)
			printf(" ");
			else
			printf("@");
		}
		for(j=0;j<n+2;j++)
		{
			if(i<n/2+1)
			printf(" ");
			else
			printf("*");
		}
		for(j=0;j<n;j++)
		{
			if(i>0)
			printf("@");
			else
			printf(" ");
		}
		printf("\n");
	}
}
}
