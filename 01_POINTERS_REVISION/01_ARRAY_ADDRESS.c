/*1) Declare an integer array of size 10 and initialize it to some values. 
  Print the addresses of each element of the array using a pointer. 
  using indirection operator , print the value stored in each element of the array.*/

#include<stdio.h>
int main()
{
	int a[10];
	printf("Enter Array Elements: ");
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\nArray Elements are :");
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}

	int *p=a;
	for(i=0;i<10;i++)
	{
		printf("\nArray element is %d and its address is %p",*(p+i),(p+i));
	}
}
