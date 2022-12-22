//wap to input your name and print sort form of name 
		//ram kumar verma : r.k.v
		//ram kumar verma : r.k.verma
#include<stdio.h>
#include<string.h>
void main()
{
	char fname[20],mname[20],lname[20];
	printf("Enter Your first name middle name and last name : ");
	scanf("%s %s %s",&fname,&mname,&lname);
	printf("%c. %c. %c.\n",fname[0],mname[0],lname[0]);
	printf("%c. %c. %s",fname[0],mname[0],lname);
}
