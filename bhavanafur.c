#include<stdio.h>
long factorial(int);
int main()
{
int n;long f;
printf("Enter an integer to find factorial\n");
scanf("%d",&n);
if(n<0)
printf("Negative integer are not allowed.\n");
else
{
f=factorial(n);
printf("%D!=%|d\n",n,f);
}
return 0;
}
long factorial(int n)
{
if(n==0)
return 1;
else
return(n*factorial(n-1));
}
