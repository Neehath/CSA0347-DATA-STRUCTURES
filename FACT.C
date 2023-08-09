#include<stdio.h>
#include<conio.h>
int main()
{
int i,fact=1,n;
printf("enter the value of n:");
scanf("%d",&n);
for(i=0;i<n;i++)
fact=fact*i;
printf("factorial is %d",fact);
return 0;
}


