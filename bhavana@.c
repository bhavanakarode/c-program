
NESTED IF ELSE

#include<stdio.h>
int main()
{
int marks; 
("Enter your mark:");
scanf("%d",&marks);
if(marks>100)
printf("not valid marks");
else if(marks>=80)
printf("your grade is A");
else if (marks>=70)
printf("your grade is B");
else if(marks>=50)
printf("your grade is C");
else if(marks>=35)
printf("your grade is D");
else
printf("your grade is E");
***********output**********

}comp@comp-OptiPlex-7040:~$ gcc bhavana@.c
comp@comp-OptiPlex-7040:~$ ./a.out
Enter your mark:75
your grade is Bcomp@comp-OptiPlex-7040:~$ 

