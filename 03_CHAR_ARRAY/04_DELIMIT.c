/*4) Read a set of words into a 2 dimensional array. 
  Make a single sentence out of the words with space as a delimiter and store in another array and display.*/

#include<stdio.h>
void LIMIT(int r, int c, char NAME[r][c])
{
	int i,j,k=0;
	printf("\nNames are : \n");
	for(i=0;i<r;i++)
	{
		printf("%s\n",NAME[i]);
	}
	char A[40];
	for(i=0;i<r;i++)
	{
		j=0;
		while (NAME[i][j] != '\0')
		{
			A[k]=NAME[i][j];
			k++;
			j++;
		}

		A[k]=' ';
		k++;



	}

	A[k-1]='\0';
	printf("\nAFter Delimited String is %s",A);
}
int main()
{
	int r,c;
	printf("Enter rows and coloums of 2D Char array: ");
	scanf("%d%d",&r,&c);
	char NAME[r][c];
	int i;
	printf("\nEnter Names: ");
	for(i=0;i<r;i++)
	{
		scanf("%s",NAME[i]);
	}
	LIMIT(r,c,NAME);
}

