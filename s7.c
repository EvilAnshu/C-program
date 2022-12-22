/*
Loop is used to execute some particular lines multiple times

there are three types of loop
while loop
for loop
do while loop

------------------------------------------
while loop:
-----------

initilization;
while(condition)
{
statements;
updation;
}

------------------------------------------
for loop:
---------

for(initialization ; condition ; updation)
{
statements;
}

------------------------------------------
do while loop:
-----------

initilization;
do
{
statements;
updation;
}
while(condition)

------------------------------------------
*/
#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d  ",i);
	}
}
