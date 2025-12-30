/*6) sorting a list of names received from keyboard, with options using call back functions.
1 :  sort with case sensitivity (strcmp)
2 : sort with out case sensitivity (stricmp)*/

#include<stdio.h>
#include<string.h>
#include<strings.h>
void COPY(char a[],char b[],int c)
{
	char temp[c];

	strcpy(temp,a);
	strcpy(a,b);
	strcpy(b,temp);
}
void SORT(int r,int c,char names[r][c],int n,int (*cmp) (const char *,const char *))
{
	int i,j;
	for(i=0;i<(n-1);i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(cmp(names[i],names[j])>0)
			{
				COPY(names[i],names[j],c);
			}
		}
	}
}
int main()
{
	int r,c;
	printf("\nEnter rows and coloumns of the array");
	scanf("%d%d",&r,&c);
	char names[r][c];
	int i;
	for(i=0;i<r;i++)
	{
		scanf("%s",names[i]);
	}

	printf("\nNames are :");
	for(i=0;i<r;i++)
	{
		printf("%s ",names[i]);
	}
	int (*cmp) (const char *,const char *);
	int choice;
	printf("\nEnter your choice");
	printf("\n1 :  sort with case sensitivity (strcmp)");
	printf("\n2 : sort with out case sensitivity (stricmp)");
	scanf("%d",&choice);
	if(choice==1)
	{
		cmp= strcmp;
	}
	else
	{
		cmp=strcasecmp;
	}



	int n=r;
	SORT(r,c,names,n,cmp);
	printf("\nSorted Names:\n");
	for(i = 0; i < n; i++)
		printf("%s\n", names[i]);

}
