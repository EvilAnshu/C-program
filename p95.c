//wap to input a character and swap the case of character
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a chacater : ");
	//ch=getch();
	ch=getche();
	//ch=getchar();
	if(ch>='a' && ch<='z')
	{
		ch=ch-32;
		printf("\ncharacter is : %c",ch);
	}
	else if(ch>='A' && ch<='Z')
	{
		ch=ch+32;
		printf("\ncharacter is : %c",ch);
	}
}
