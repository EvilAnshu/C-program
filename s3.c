//marks of 5 subjects of a student are given by user
/* wap to print the division of the student
division is given according to following criteria.
percentage >=60 && percentage <=100 First division 
percentage <60 && percentage >=50 second division
percentage <50 && percentage >=33 third division
percentage <33 fail
*/
#include<stdio.h>
void main()
{
	int s1,s2,s3,s4,s5;
	float per;
	printf("Enter Marks of 5 Subject : ");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	per=(float)(s1+s2+s3+s4+s5)/5;
	if(per >= 60 && per <= 100)
	printf("%f : First Division",per);
	else if(per >= 50)
	printf("%f : Second Division",per);
	else if(per >= 33)
	printf("%f : Third Division",per);
	else if(per < 33 && per > 0)
	printf("You are fail...");
	else
	printf("Marks should must be between 0 to 100...");
}

