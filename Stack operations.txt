#include<stdio.h>
#include<conio.h>
int stack[100],i,j,ch=0,n,top=-1;
int push();
int pop();
int show();
int main(){
printf("enter the no of elements:");
scanf("%d",&n);
printf("stack operations using array:");
printf("\n----------------\n");
while(ch!=4){
printf("choose from below:");
printf("enter the choice:");
scanf("%d",&ch);
switch(ch){
case 1;
{
push();
break;
}
case 2;
{
pop();
break;
}
case 3;
{
show();
break;
}
case 4;
{
exit();
break;
}
default:
{
printf("enter valid choice");
}
};
}
}
int push(){
int val;
if(top==n){
printf("\noverflow");
}
else{
printf("enter the value");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
int pop(){
if(top==-1)
printf("underflow");
else
top=top-1;
}
int show(){
for(i=top;i>=0;i--){
printf("%d\n",stack[i])
}
}
getch();
return 0;
}
