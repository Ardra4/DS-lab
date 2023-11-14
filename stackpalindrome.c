#include <stdio.h>
#define size 10
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
	for(i=top-1;i>0;i--)
	printf("%d\t",s[i]);
	}
void main(){
	char str[50];
	printf("Enter the string:");
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++)
		push(str[i]);
	while(!isempty())
		printf("%c",pop());}
