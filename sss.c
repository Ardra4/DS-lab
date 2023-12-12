#include<stdio.h>
#include<malloc.h>
struct Node
{
	int item;
	struct Node *next;
};
typedef struct Node node;
node *head= NULL;
node *newnode(int val)
{
	node *p;
	p=(node*)malloc(sizeof(node));
	p->item=val;
	p->next=NULL;
}
void insertfirst(int val)
{
	node *p;
	p=newnode(val);
	p->item=val;
	p->next=head;
	head=p;
}
void insertafter(int item1,int val)
{
	node *curr=head,*p;
	printf("curr=%p",curr);
	while(curr!=NULL && curr->item!=item1)
		curr=curr->next;
	if(curr==NULL)
		printf("Item not found\n");
	else
		p=newnode(val);
		p->next=curr->next;
		curr->next=p;
}
void insertbefore(int item1,int val)
{
	node *curr=head,*prev,*p;
	while(curr!=NULL && curr->item!=item1)
	{
		prev=curr;
		curr=curr->next;
	}
	if(curr==NULL)
		printf("Item not found\n");
	else
	{
		if(prev==head)
			insertfirst(val);
		else
		{
			p=newnode(val);
			p->next=prev->next;
			prev->next=p;
		}
	}
}
void displaylist()
{
	node*curr;
	curr=head;
	while(curr!=NULL)
	{
		printf("%d-",curr->item);
		curr=curr->next;
	}
}
int main()
{
	int ch,po,it;
	do{
		printf("\n1.Insert first\n2.Insert after\n3.Insert before\n4.Display\n5.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter the value to be inserted:");
				scanf("%d",&po);
				insertfirst(po);
				break;
			case 2: printf("Enter item after which the value to be inserted:");
				scanf("%d",&it);
				printf("Enter the value to be inserted:");
				scanf("%d",&po);
				insertafter(it,po);
				break;
			case 3: printf("Enter item before which the value to be inserted:");
				scanf("%d",&it);
				printf("Enter the value to be inserted:");
				scanf("%d",&po);
				insertbefore(it,po);
				break;
			case 4: displaylist();
				break;
			case 5: break;
		       default: printf("Invalid choice");
		}
	}while(ch!=5);
}
