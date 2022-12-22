/*
A A A A A
B B B B 
C C C 
D D 
E
*/
#include<stdio.h>
int main()
{
	char i,j;
	for(i='A';i<='E';i++)
	{
		for(j=i;j<='E';j++)
		{
			printf("%c ",i);	
		}
		printf("\n");
	}
}
