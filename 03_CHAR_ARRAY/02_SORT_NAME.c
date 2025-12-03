/*2) Create a two dimentional character array. Read the strings from user.
  Sort the array in ascending order and display. write a seperate function for sorting.*/

#include<stdio.h>
#include<string.h>

int COMPARE(char s1[],char s2[])
{
	int i=0,j;
	while(s1[i]!='\0' && s2[i]!='\0')
	{
		if(s1[i]==s2[i])
		{
			i++;
		}
		else if(s1[i]>s2[i])
		{
			return 1;
		}
		else
		{
			return -1;
		}

	}
	if(s1[i]=='\0' && s2[i]!='\0')
		return -1;
	if(s1[i]!='\0' && s2[i]=='\0')
		return 1;

	return 0;
}
void SORT(int r,int c, char a[r][c])
{
	int i,R,j;
	char TEMP[c];
	printf("\nNames are :\n");
	for(i=0;i<r;i++)
	{
		printf("%s ",a[i]);
	}

	for(i=0;i<r-1;i++)
	{
		for(j=i+1;j<r;j++)
		{
			R=COMPARE(a[i],a[j]);
			if(R==1)
			{
				strcpy(TEMP,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],TEMP);
			}

		}
	}
	printf("\nAFTER SORTING Names are :\n");
	for(i=0;i<r;i++)
	{
		printf("%s ",a[i]);
	}

}

int main()
{
	int r,c;
	printf("Enter rows columns for 2D CHAR ARRAY: ");
	scanf("%d%d",&r,&c);
	char a[r][c];
	int i;
	printf("\nPlease enter names : \n");
	for(i=0;i<r;i++)
	{
		scanf("%s",a[i]);

	}


	SORT(r,c,a);
}

