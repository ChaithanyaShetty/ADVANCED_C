/*Declare a two-dimensional array of elements for sales details of a store,
  for each item, for each sales man. Take the sales values as input and print the array in matrix form.
  Find out and print the following :
  1 ) Total sales by each sales man
  2 ) Total sales for a item
  3 ) Total sales*/

#include<stdio.h>
int main()
{
	int sales_man,item;
	printf("\nEnter count of sales_man: ");
	scanf("%d",&sales_man);
	printf("\nEnter items: ");
	scanf("%d",&item);
	int a[sales_man][item];
	int i,j;
	for(i=0;i<sales_man;i++)
	{
		for(j=0;j<item;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMATRIX ELEMENTS ARE: \n");
	for(i=0;i<sales_man;i++)
	{
		for(j=0;j<item;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	//1 ) Total sales by each sales man

	int total_sale_by_person;
	for(i=0;i<sales_man;i++)
	{total_sale_by_person=0;
		for(j=0;j<item;j++)
		{
			total_sale_by_person+=a[i][j];
		}
		printf("\nTotal sale by sale person %d is %d",(i+1),total_sale_by_person);
	}

	//2 ) Total sales for a item
	int total_sale_for_item;
	for(i=0;i<item;i++)
	{
		total_sale_for_item=0;
		for(j=0;j<sales_man;j++)
		{
			total_sale_for_item+=a[j][i];

		}
		printf("\nTotal sale for item %d  is %d",(i+1),total_sale_for_item);
	}


	//3 ) Total sales
	int total_sale=0;
	for(i=0;i<sales_man;i++)
	{
		for(j=0;j<item;j++)
		{
			total_sale+=a[i][j];
		}
	}
	printf("\nTotal sale is %d",total_sale);
}
