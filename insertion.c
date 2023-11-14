#include<stdio.h>
void read(int[],int);
void insertionsort(int[],int);
void print(int[],int);
void main()
{
	int n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int a[n];
	read(a,n);
	insertionsort(a,n);
	print(a,n);
}
void read(int a[],int n)
{
	int i;
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	 	scanf("%d",&a[i]);
}
void insertionsort(int a[],int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}
void print(int  a[],int n)
{
	int i;
	printf("The sorted array:");
	for(i=0;i<n;i++)
	  printf("%d\n",a[i]);
}
