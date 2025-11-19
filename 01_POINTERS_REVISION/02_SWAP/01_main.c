/*2) Write two source files, main.c and swap.c. 
  The main function initializes a two-element array of ints, 
  and then calls the swap function to swap the pair.*/


#include<stdio.h>
void SWAP(int *p);
int main()
{
	int a[2]={3,4};
	printf("\nArray elements are a[0]=%d a[1]=%d",a[0],a[1]);
	int *p=a;
	SWAP(p);
}
