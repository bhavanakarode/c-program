
ADD n NUMBERS

#include<stdio.h>
int main()
{
int n,sum=0,c,value;
printf("Enter the number of integers you want to add\n");
scanf("%d",&n);
printf("Enter %d integers\n",n);
for(c=1;c<=n;c++)
{
scanf("%d",&value);
sum=sum+value;
}
printf("sum of entered integers=%d\n",sum);
return 0;
}

**********output************
comp@comp-OptiPlex-7040:~$ gcc bhavana16.c
comp@comp-OptiPlex-7040:~$ ./a.out
Enter the number of integers you want to add
4
Enter 4 integers
1 2 3 4
sum of entered integers=10
comp@comp-OptiPlex-7040:~$ 

