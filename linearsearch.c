#include<stdio.h>
void readnum(int[],int);
int linearsearch(int [] ,int ,int);
void printnum(int [],int ,int );
void main()
{
	int n,search;
	printf("Enter the no. of elments:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the number to be searched:");
	scanf("%d",&search);
	linearsearch(a,n,search);
	readnum(a,n);
	printnum(a,n,search);
}
void readnum(int arr[],int n)
{
	int i;
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);}
int linearsearch(int arr[],int n,int search)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
			return(i);
	}
	return (-1);
	
}
void printnum(int arr[],int n,int search)
		{
			int check=linearsearch(arr,n,search);
			if(check==-1)
			printf("The number is not found");
			else
				printf("The number is  found.\n");
		}
			    
