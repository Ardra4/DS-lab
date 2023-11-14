#include<stdio.h>
void sparse(int[10][10],int,int,int[20][3]);
void printsparse(int[20][3],int);
void main()
{
	int i,j,a[10][10],r,c,t[20][3];
	printf("Enter row and column size:");
	scanf("%d %d",&r,&c);
	printf("Enter the matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix is\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	sparse(a,r,c,t);
}
void sparse(int a[10][10],int r,int c,int t[20][3])
{
	int i,j,k=1;
	t[0][0]=r;
	t[0][1]=c;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=0)
			{
				t[k][0]=i;
				t[k][1]=j;
				t[k][2]=a[i][j];
				k++;
			}
		}
	}
	t[0][2]=k-1;
	printsparse(t,k);
}
void printsparse(int t[20][3],int k)
{
	printf("Triple representation is \n");
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d \t",t[i][j]);
		}
		printf("\n");
	}
}
