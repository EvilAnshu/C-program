#include<stdio.h>
#include<conio.h>
int con(char str[])
{
	int i=0,count=0;
	while(str[i]!='\0')
	{
		if(str[i]==' ' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' ||str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
		}
		else
		count++;
		i++;
	}
	return count;
}
void main()
{
	int num;
	char str[]="My Country is India";
	num=con(str);
	printf("%d",num);
}
