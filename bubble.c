#include<stdio.h>
void readnum(int[],int);
void sortnum(int[],int);
void swap(int*,int*);
void printnum(int[],int);

void main()
{
	int n;
	printf("Enter the no.of elements:");
	scanf("%d",&n);
	int a[n];
	readnum(a,n);
	sortnum(a,n); 
	printnum(a,n);
	
	
}
void readnum(int a[],int n)
{
	int i;
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}
void sortnum(int a[],int n)
{
	int i,j,exchange;
	for(i=0;i<n;i++)
	{
		exchange=0;
		for(j=0;j<n-1;j++)
		{	if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
				exchange=1;
			}
			
			if(exchange==0)
			return;
		 }
	}		
}
void swap(int *a,int*b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
void printnum(int a[],int n)
{
	int i;
	printf("\n Sorted Order:\n");
	for(i=0;i<n;i++)
	printf("\n %d",a[i]);}
