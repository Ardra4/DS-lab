#include<stdio.h>
void readnum(int[],int);
void selsort(int[],int);
void printnum(int[],int);
void swap(int*,int*);

void main()
{
	int n;
	printf("Enter the no.of elements:");
	scanf("%d",&n);
	int a[n];
	readnum(a,n);
	selsort(a,n); 
	printnum(a,n);
	
	
}
void readnum(int a[],int n)
{
	int i;
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}
void selsort(int a[],int n)
{
	int i,j,l,index;
	for(i=0;i<n-i;i++)
	{
		l=a[i];
		index=i;
		for(j=0;j<n-i;j++)
		{
			if(l<a[j])
			{
				l=a[j];
				index=j;
			}
		}
				swap(&a[index],&a[n-1-i]);
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
			printf("\n %d",a[i]);
			}
