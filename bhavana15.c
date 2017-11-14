
FIND ARMSTRONG NUMBER

#include<stdio.h>
int main()
{
int number,sum=0,temp,remainder;
printf("Enter an intiger\n");
scanf("%d",&number);
temp=number;
while(temp!=0)
{
remainder=temp%10;
sum=sum+
remainder*remainder*remainder;
temp=temp/10;
}
if(number==sum)
printf("Entered number is an armstrong number.\n");
else
printf("Entered number is not an armstrong number.\n");
return 0;
}

*****************output******************

comp@comp-OptiPlex-7040:~$ gcc bhavana15.c
comp@comp-OptiPlex-7040:~$ ./a.out
Enter an intiger
371
Entered number is an armstrong number.
comp@comp-OptiPlex-7040:~$ 

