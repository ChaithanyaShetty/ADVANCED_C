/*3) Read the names of students from a class. 
  write a function to Search for a given name as input, 
  if found in the array, display the index where the string was found matching.*/

#include<stdio.h>
void INDEX(int r,int c, char NAMES[r][c])
{
	int i=0,j,index=-1;
	printf("\nNames are :\n");
	for(i=0;i<r;i++)
	{
		printf("%s\n",NAMES[i]);
	}

	char name[c];
	printf("\nPlease enter a name from 2d char array to find its index: ");
	scanf("%s",name);
	for(i=0;i<r;i++)
	{

		j=0;
		while(NAMES[i][j] != '\0' && name[j] != '\0' && NAMES[i][j] == name[j])
		{
			j++;

			if(NAMES[i][j] == '\0' && name[j] == '\0')
			{
				index =i;
				break;
			}
		}
	}
	if(index==-1)
		printf("\nMatch not found");
	else
		printf("\nMAtch fount at index=%d",index);

}
int main()
{
	int r,c;
	printf("Enter rows and coloumns of 2D Char array: ");
	scanf("%d%d",&r,&c);
	char NAMES[r][c];
	printf("\nEnter Names :");
	int i;
	for(i=0;i<r;i++)
	{
		scanf("%s",NAMES[i]);
	}
	INDEX(r,c,NAMES);
}

