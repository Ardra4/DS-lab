#include<stdio.h>
#define size 50
int s[size];
int top=0;
int isfull()
{
	if(top>=size)
	return(1);
	else 
	return(0);
}
int isempty(){
	if(top==0)
	 return(1);
	else 
	 return(0);
}
int push(int value)
{
		s[top++]=value;
}
int pop(){
	if(isempty())
	printf("Stack is empty.");
	else
	return(s[--top]);
}
int peek(){
	if(isempty())
	printf("Empty.");
	else 
	return(s[top-1]);}
void displaystack(){
	int i;
	printf("Stack is:");
	for(i=top-1;i>=0;i--)
	printf("%d\t",s[i]);
	}
void main(){
	int c,v;
	do{
	printf("\n 1.Push\n 2.Pop\n 3.Peek\n 4.Display\n 5.Exit\n ");
	printf("Enter your choice:");
	scanf("%d",&c);
	switch(c){
		case 1:printf("Enter the value:");
				scanf("%d",&v);
				if(isfull()){
				printf("Full");}
			else{

				push(v);}
				break;
		case 2:if(isempty()){
			printf("Empty");}
			else{
			printf("The value is: %d",pop());
			}break;
		case 3:if (isempty())
			printf("Stack is empty.\n");
			else
			printf(" peek value%d\n",peek());
			break;
		case 4:displaystack();
			break;
		case 5:printf("Program exiting.");
			break;
		default:printf("Invalid input.");
		break;
	}
	}while(c!=5);}
