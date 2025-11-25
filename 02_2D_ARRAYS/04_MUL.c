//Write a program  for matrix multiplication.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m1,n1;
	printf("\nEnter Matrix1 rows and coloumns: ");
	scanf("%d%d",&m1,&n1);
	int a[m1][n1];
	printf("\nEnter Matrix1 Elements: \n");
	int i,j;
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMatrix2 Elements are:\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	int m2,n2;
	printf("\nEnter Matrix2 rows and coloumns: ");
	scanf("%d%d",&m2,&n2);
	int b[m2][n2];
	printf("\nEnter Matrix1 Elements: \n");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("\nMatrix2 Elements are:\n");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

	if(n1!=m2)
	{
		printf("\nMatrix Multiplication is not possible");
		exit(1);
	}
	int k,c[m1][n2];
	printf("\nResultant Matric Multiplication is \n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		{
			c[i][j]=0;
			for(k=0;k<n1;k++)
			{
				c[i][j]+= a[i][k] * b[k][j];
			}
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

}
