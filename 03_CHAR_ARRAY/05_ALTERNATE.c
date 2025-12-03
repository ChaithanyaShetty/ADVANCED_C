/*5) Read a set of names in small letters. 
  Convert the alternate characters of every string into capital case and display. */

#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter rows and coloumns: ");
	scanf("%d%d",&r,&c);
	char a[r][c];
	int i,j;
	printf("\nPlease enter only small letters: ");
	for(i=0;i<r;i++)
	{
		scanf("%s",a[i]);
	}
	printf("\nNames are : \n");
	for(i=0;i<r;i++)
	{
		printf("%s\n",a[i]);
	}
	printf("\nConverted Names are : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;a[i][j]!='\0';j++)
		{   if(j % 2 != 0 && a[i][j] >= 'a' && a[i][j] <= 'z')
			a[i][j]-=32;
		}
		printf("%s\n",a[i]);

	}
}
