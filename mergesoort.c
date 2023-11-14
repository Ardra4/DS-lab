#include<stdio.h>
void read(int [],int );
void mergesort(int [],int,int);
int simplesort(int [],int,int,int);
void print(int [],int);
void main()
{
	int n,start=0,last;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	read(a,n);
	mergesort(a,0,n-1);
	print(a,n);
}
void read(int a[],int n)
{
	int i;
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void mergesort(int a[],int beg,int end)
{
	int mid;
	if(beg<end)
	{
		mid=(beg+end)/2;
		mergesort(a,beg,mid);
		mergesort(a,mid+1,end);
		simplesort(a,beg,mid+1,end);}
}
int simplesort(int a[],int start,int mid,int last)
{
	int i=start,j=mid,k=0,temp[last+1];
	while(i<mid&&j<=last)
	{
		
		if(a[i]< a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];}
		while(i<=mid){
			temp[k++]=a[i++];}
		while(j<=last){
			temp[k++]=a[j++];}
		for(i=start, k=0; i<=last;i++,k++){
		a[i]=temp[k];	}
}
void print(int a[],int n){
	int i;
	printf("Sorted array:");
	for(i=0;i<n;i++)
		printf("\n%d",a[i]);
	}
