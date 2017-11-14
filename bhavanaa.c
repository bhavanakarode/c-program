#include<stdio.h>
#define PI 3.142
void main()
{
float radius,area;
printf("Enter the radius ofa circle\n");
scanf("%f",&radius);
area=PI*radius*radius;
printf("Area of a circle=%5.2f\n",area);
}
************output**************
comp@comp-OptiPlex-7040:~$ ./a.out
Enter the radius ofa circle
5
Area of a circle=78.55
comp@comp-OptiPlex-7040:~$ 


