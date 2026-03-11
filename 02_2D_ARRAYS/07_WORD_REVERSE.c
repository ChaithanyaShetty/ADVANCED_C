#include<stdio.h>
void REVERSE(int r,int c, char a[r][c])
{
	printf("HI");
	int i,j,k;
	printf("\nNAmes are: ");
	for(i=0;i<r;i++)
	{
		printf("%s ",a[i]);
	}
	char  temp[c];
	for(i=0,k=r-1;i<k;i++,k--)
	{
		for(j=0;j<c;j++)
		{
			temp[j]=a[i][j];
			a[i][j]=a[k][j];
			a[k][j]=temp[j];


		}
	}

	printf("\nReversed Names are: ");
	for(i=0;i<r;i++)
	{
		printf("%s ",a[i]);
	}

}
int main()
{
	int r,c;
	printf("Enter rows and coloumns of 2d char array: ");
	scanf("%d%d",&r,&c);
	char a[r][c];
	int i;
	printf("\nEnter the names: ");
	for(i=0;i<r;i++)
	{
		scanf("%s",a[i]);
	}
	REVERSE(r,c,a);
}
