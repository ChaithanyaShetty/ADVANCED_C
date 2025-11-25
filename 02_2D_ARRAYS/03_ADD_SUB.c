//Write a program  for matrix addition and subtraction.

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m1,n1;
	printf("Enter Rows and Coloumn of Matrix1: ");
	scanf("%d %d",&m1,&n1);
	int a[m1][n1];
	printf("\nEnter matrix1 elements: ");
	int i,j;
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("\nMAtrix1 elements are \n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int m2,n2;
	printf("Enter Rows and Coloumn of Matrix2: ");
	scanf("%d %d",&m2,&n2);
	int b[m2][n2];
	printf("\nEnter matrix2 elements: ");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("\nMAtrix2 elements are \n");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

	if(m1!=m2 || n1!=n2)
	{
		printf("\nMatrix Addition and Subtraction not possible");
		exit(1);
	}

	printf("\nMartix Addition is \n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%d ",(a[i][j])+(b[i][j]));
		}
		printf("\n");
	}

	printf("\nMartix Subtraction is \n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("%d ",(a[i][j])-(b[i][j]));
		}
		printf("\n");
	}
}
