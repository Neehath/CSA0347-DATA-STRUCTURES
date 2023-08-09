#include<stdio.h>
#include<conio.h>
int main()
{
int a[2][2],b[2][2],multi[2][2]={0},i,j,k;
printf("enter the matrix a: ");
for(i=0;i<2;i++)
	for(j=0;j<2;j++)
		scanf("%d",&a[i][j]);
printf("enter the matrix b: ");
for(i=0;i<2;i++)
	for(j=0;j<2;j++)
		scanf("%d",&b[i][j]);
printf("multiplication of matrix");
for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	       for(k=0;k<2;k++)
	       multi[i][j]=multi[i][j]+a[i][k]*b[k][j];
printf("print the result");
for(i=0;i<2;i++)
	for(j=0;j<2;j++)
		printf("%d",multi[i][j]);
return 0;
}