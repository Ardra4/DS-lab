#include<stdio.h>
void readnum(int[],int);
int binarysearch(int [] ,int n ,int ele);
void printnum(int [],int n,int ele);
void main()
{
	int ele,n;
	printf("Enter the no.of elements:");
	scanf("%d",&n);
	int arr[n];
	readnum(arr,n);
	printf("Enter the number to be searched:");
	scanf("%d",&ele);
	binarysearch(arr,n,ele);
	
	printnum(arr,n,ele);
	}
void readnum(int arr[],int n)
{
	int i;
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);}
int binarysearch(int arr[],int n,int ele)
{
	int top,bot,mid;
	top=0;bot=n-1;
	while(top<=bot)
	{
		mid=(top+bot)/2;
		if(arr[mid]==ele)
			return(mid);
		else
		if(ele<arr[mid])
			bot==mid-1;
		else
			top=mid+1;
	}
	return(-1);
}
void printnum(int arr[],int n,int ele)
		{
			int check=binarysearch(arr,n,ele);
			if(check==-1)
			printf("The number is not found");
			else
				printf("The number is  found.\n" );
		}
			    
