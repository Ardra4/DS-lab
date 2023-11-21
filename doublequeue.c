
#include<stdio.h>
#define size 50
int Q[size];
int F=-1,R=-1;
int isempty(){
	if (F==-1)
	return(1);
	else
	return(0);
}
int isfull(){
	if(F==(R+1)%size)
	return(1);
	else
	return(0);
}
void insertR(int value){
	if(isfull())
	printf("Queue is full.");
	else
		if(isempty())
		F=R=0;
		else
		R=(R+1)%size;
		Q[R]=value;
}
void insertF(int value)
{
	if(isfull())
	printf("Queue is full.");
	else
		if(isempty())
		F=R=0;
		else
		F=(F+size-1)%size;
		Q[F]=value;
}
int deleteF(int value)
{
	if(isempty())
	printf("Queue is empty.");
	else
	{
		value=Q[F];
		if(F==R)
		F=R=-1;
		else
		F=(F+1)%size;
	}
	return(value);
}
int deleteR(int value)
{
	if(isempty())
	printf("Queue is empty.");
	else
	{
		value=Q[R];
		if(F==R)
		F=R=-1;
		else
		R=(R+size-1)%size;
	}
	return(value);
		
}
void displayQ()
{
	int i=F;
	if(isempty())
		printf("THE QUEUE IS EMPTY");
	else
	{
		do{
			printf("%d",Q[i]);
			i=(i+1)%size;
		}
		while(i!=(R+1)%size);
		printf("\n");
		}
}
void main()
{
	int c,val,value;
	do{
	printf("\n 1.InsertR\n 2.InsertF \n 3.DeleteF\n 4.DeleteR \n5.Display\n 6.Exit\n ");
	printf("Enter your choice:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:printf("Enter the value to be inserted at rear:");
			scanf("%d",&value);
			insertR(value);
			break;
		case 2:printf("Enter the value to be inserted at front:");
			scanf("%d",&value);
			insertF(value);
			break;
		case 3:val=deleteF(value);
			printf("Element deleted:%d",val);
			break;
		case 4:val=deleteR(value);
			printf("Element deleted:%d",val);
			break;
		case 5:printf("THE QUEUE IS:");
			displayQ();
			break;
		case 6:printf("PROGRAM EXITING");
			break;
		default:printf("Invalid input");
		break;
	}
	}while(c!=6);
}
