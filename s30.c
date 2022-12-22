#include<stdio.h>
void main()
{
	int i,j,k,l;
	char ch;
	for(i=1;i<=6;i++)
	{
		ch='A';
		for(j=i;j<=6;j++)
		{
			printf("%c",ch);
			ch++;
		}
		for(k=1;k<=2*i-2;k++)
		{
			printf(" ");
		}
		for(l=i;l<=6;l++)
		{
			ch--;
			printf("%c",ch);
		}
		printf("\n");
	}
}
