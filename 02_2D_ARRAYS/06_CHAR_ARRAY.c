/*Declare a two dimensional array of characters, 
  read names from the user and print them back with each individual character format (%c) in a loop.*/

#include<stdio.h>
int main()
{
	char a[3][10];
	printf("\nEnter names: ");
	int i,j;
	for(i=0;i<3;i++)
	{

		{
			scanf("%s",a[i]);
		}
	}

	printf("\nNames are: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}

