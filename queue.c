#include<stdio.h>
#define size 4
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
void insertQ(int value){
	if(isfull())
	printf("Queue is full.");
	else
		if(isempty())
		F=R=0;
		else
		R=(R+1)%size;
		Q[R]=value;
}
int deleteQ(int value){
	if(isempty())
	printf("Queue is empty.");
	else{
		value=Q[F];
		if(F==R)
		F=R=-1;
		else
		F=(F+1)%size;
		return(value);
		}
}
void displayQ(){
	if(isempty())
		printf("Empty.");
	else
	{
		int i=F;
		printf("The queue elements:\t");
		while(1)
		{
			printf("%d",Q[i]);
			if(i==R)
				break;
			i=(i+1)%size;
		}
	printf("\n");
	}
}
void main()
{
	int c,value;
	do{
	printf("\n 1.Insert\n 2.Delete\n 3.Display\n 4.Exit\n ");
	printf("Enter your choice:");
	scanf("%d",&c);
	switch(c){
		case 1:printf("Enter the value to be inserted:");
				scanf("%d",&value);
				if(isfull()){
				printf("Full");}
			else{

				insertQ(value);}
				break;
		case 2:if(isempty()){
			printf("Empty");}
			else{
			printf("Deleted element: %d",deleteQ(value));
			}break;
		case 3:
			displayQ();
			break;
		case 4:printf("Program exiting.");
			break;
		default:printf("Invalid input.");
		break;
	}
	}while(c!=4);
}
