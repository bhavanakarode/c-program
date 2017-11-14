
PERFECT NUMBER

#include<stdio.h>
int main(){
int n,i=1,sum=0;
printf("Enter a number:");
scanf("%d",&n);
while(i<n){
if(n%i==0)
sum=sum+i;
i++;
}
if(sum==n)printf("%d is a perfect number",i);
else
printf("%d is not a perfect number",i);
return 0;
**********out***********
}comp@comp-OptiPlex-7040:~$ gcc bhavanap.c
comp@comp-OptiPlex-7040:~$ ./a.out
Enter a number:5
5 is not a perfect numbercomp@comp-OptiPlex-7040:~$ 


