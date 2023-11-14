#include<stdio.h>
void read(int [],int );
void qsort(int [],int,int);
int partition(int [],int,int);
void swap(int*,int*);
void print(int [],int);
void main(){
	int n,start=0,end;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	end=n-1;
	read(a,n);
	qsort(a,start,end);
	print(a,n);
}
void read(int a[],int n)
{
	int i;
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void qsort(int a[],int start,int end)
{
	int pos;
	if(start<end){
	pos=partition(a,start,end);
	qsort(a,start,pos-1);
	qsort(a,pos+1,end);
	}
}
int partition(int a[],int start,int end)
{
	int key,i,j;
	key=a[start];
	i=start+1;j=end;
	do{
		while(i<j && a[i]<key)
			i++;
		while(j>start && a[j]>key)
			j--;
		if(i<j)
			swap(&a[i],&a[j]);
	}
	while(i<j);
		swap(&a[start],&a[j]);
		return(j);
}
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	}
void print(int a[],int n){
	int i;
	printf("Sorted array:");
	for(i=0;i<n;i++)
		printf("\n%d",a[i]);
}
