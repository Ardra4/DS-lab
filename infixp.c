#include<stdio.h>
#define size 50
char a[size];
int top=0;
int isempty()
{
	if(top==0)
	return(1);
	else
	return(0);
}
int isfull()
{
	if(top>=size)
	return(1);
	else
	return(0);
}
void push(char value)
{
	if(isfull())
	printf("Stack is full");
	else
	a[top++]=value;
}
char pop()
{
	if(isempty())
		printf("Stack is empty");
	else
		return a[--top];
}
char peek()
{
	if(isempty())
		printf("Stack is empty");
	else
	return a[top-1];
}
int instackp(char c)
{
	switch(c)
	{
		case'+':
		case'-':return 2;break;
		case'*':
		case'/':return 4;break;
		case'^':return 5;break;
		case'(':return 0;
	}
}
int inputp(char c)
{
	switch(c)
	{
		case'+':
		case'-':return 1;break;
		case'*':
		case'/':return 3;break;
		case'^':return 6;break;
	}
}
void topostfix(char exp[])
{
	char postfix[100];
	int i=0;int j=0;
	char c;
	while(exp[i]!='\0')
	{
		switch(exp[i])
		{
			case'(':(push (exp[i]));
				break;
			case'+':
			case'-':
			case'*':
			case'/':
			case'^':while(isempty()==0 && instackp (peek()) > inputp(exp[i]))
				{
					postfix[j++]=pop();}
					push(exp[i]);
					break;
			case')':while((c=pop())!='(')
				{
					postfix[j++]=c;
				}break;
			default:postfix[j++]=exp[i];
		}
	i++;
	}
	while(isempty()==0)
	{
	postfix[j++]=pop();
	}
	postfix[j]='\0';
	printf("Postfix is\n %s\n",postfix);
}
void main()
{
	char exp[100];
	printf("Enter an infix expression:");
	scanf("%s",exp);
	topostfix(exp);
}
