/*Search for an element in a two dimentional array, and print its position - as row and column numbers. 
  write a search function that will receive the array and return row and column indexes as output.*/


#include<stdio.h>

int FIND(int r,int c,int a[r][c], int number, int *rowpos,int *colpos);
/*
// Old idea (wrong / risky)   first i used like this
int FIND(int a[r][c], int number,int r, int c, int *rowpos, int *colpos);

// New correct way later changed to this way 
int FIND(int r, int c, int a[r][c], int number, int *rowpos, int *colpos)

Reason:

In C, when passing a 2-D array to a function, the column size must be known before the array parameter. 
So we pass rows and columns first, then the array. 
Otherwise the compiler cannot calculate memory offsets correctly.

Yes, that’s correct. When you pass r and c first, 
the compiler knows the matrix dimensions and can correctly calculate the memory address for a[i][j].

So the compiler uses r and c to understand the memory layout, 
and uses i and j only during execution to access elements like a[i][j].
 */
int main()
{
	int r,c;
	printf("\nEnter the rows amd coloumns of the matrix: ");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("\nEnter matrix Elements: ");
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMatrix Elements are: \n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	int number;
	printf("\nEnter the number to serach in matrix: ");
	scanf("%d",&number);

	int rowpos=r;
	int colpos=c;
	int R=FIND(r,c,a,number,&rowpos,&colpos);

	if(R==1)
	{
		printf("\nElement found at r=%d,c=%d",rowpos,colpos);
	}
	else
	{
		printf("\nElement not found");
	}
}

int FIND(int r,int c,int a[r][c], int number, int *rowpos,int *colpos)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]==number)
			{
				*rowpos=i;
				*colpos=j;
				return 1;
			}

		}
	}
	return 0;
}

