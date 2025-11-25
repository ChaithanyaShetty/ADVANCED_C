/*Write the following program :
  Declare a two dimensional array of elements and find and print its transpose.
  eg., if the matrix is :       
  1 3
  4 5
  7 8

  its transpose should be :     
  1 4 7
  3 5 8  */

#include<stdio.h>
int main()
{
	int i,j;
	printf("Enter rows and coloumns of matrix: ");
	scanf("%d %d",&i,&j);
	int a[i][j];
	int m,n;
	printf("\nEnter MAtrix Elements: ");
	for(m=0;m<i;m++)
	{
		for(n=0;n<j;n++)
		{
			scanf("%d",&a[m][n]);
		}
	}

	printf("\nMatrix elements are \n");


	for(m=0;m<i;m++)
	{
		for(n=0;n<j;n++)
		{
			printf("%d ",a[m][n]);
		}
		printf("\n");
	}
	printf("\nAfter Transpose Matrix elements are \n");


	for(m=0;m<j;m++)
	{
		for(n=0;n<i;n++)
		{
			printf("%d ",a[n][m]);
		}
		printf("\n");
	}
}
