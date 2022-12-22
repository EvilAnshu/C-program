
#include<stdio.h>
void main()
{
	char gen;
	printf("Enter Your Gender: ");
	scanf("%c",&gen);
	switch(gen)
	{
		case 'm':
		case 'M':
			printf("you are male");
			break;
		case 'f':
		case 'F':
			printf("you are female");
			break;
		default:
			printf("Please Enter only m or f...");
	}
}
