#include<stdio.h>
#include<conio.h>
/*
*----	----*
**---	---**
***--	--***
****-	-****
*****	*****
*/
void main()
{
	int i,j;
	for(i=1;i<6;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=1;j<=(5-i)*2;j++)
		{
			printf("-");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
