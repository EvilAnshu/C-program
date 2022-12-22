#include<stdio.h>
struct student
{
	char name[100];
	int rollno;
	float fee;
	char mobno[100];
	char course[100];
};
typedef struct student data;
void main()
{
	data s1;
	printf("Enter student name : ");
	gets(s1.name);
	printf("Enter student Roll no. : ");
	scanf("%d",&s1.rollno);
	printf("Enter student fee : ");
	scanf("%f",&s1.fee);
	printf("Enter student Mob. no. : ");
	scanf("%s",&s1.mobno);
	printf("Enter student Course : ");
	scanf("%s",&s1.course);
	
	printf("\nstudent name : %s",s1.name);
	printf("\nstudent Roll no. : %d",s1.rollno);
	printf("\nstudent fee : %f",s1.fee);
	printf("\nstudent Mob. no. : %s",s1.mobno);
	printf("\nstudent Course : %s",s1.course);
}
