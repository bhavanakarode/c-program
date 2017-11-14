 
ADD DIGIT


# include<stdio.h>
int main()
{
int n,sum=0,remainder;
printf("enter an intiger\n");
scanf("%d",&n);
while(n!=0)
{
remainder=n%10;
sum= sum+remainder;
n=n/10;
}
printf("sum of digits of entered number=%d\n",sum);
return 0;

*************output******************
}comp@comp-OptiPlex-7040:~$ gcc bhavanaex.c
comp@comp-OptiPlex-7040:~$ ./a.out
enter an intiger
5
sum of digits of entered number=5
comp@comp-OptiPlex-7040:~$ 

