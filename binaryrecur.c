#include<stdio.h>
void readnum(int[],int);
int binarysearch(int[] ,int ,int,int );
void main()
{
	int check,top=0,ele,n;
	printf("Enter the no.of elements:");
	scanf("%d",&n);
	int arr[n];
	readnum(arr,n);
	printf("Enter the number to be searched:");
	scanf("%d",&ele);
	readnum(arr,n);
	binarysearch(arr,n,ele);
	 check=binarysearch(arr,n,ele);
			if(check==-1)
			printf("The number is not found");
			else
				printf("The number is  found.\n" ,check+1);
		
}
void readnum(int arr[],int n)
{
	int i;
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
int binarysearch(int arr[],int ele,int top,int bot)
{
	int mid;
	if(top<=bot)
	{
		mid=(top+bot)/2;
		if(arr[mid]==ele)
			return(mid);
		else
		{
		if(ele<arr[mid])
			binarysearch(arr,top,mid+1,ele);
		else
			binarysearch(arr,mid-1,ele,bot);
		}
	}
	else
		return(-1);
}

			    
