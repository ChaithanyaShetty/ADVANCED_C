#include<stdio.h>
void SWAP(int *p)
{
	int temp = *p;
	*p = *(p+1);
	*(p+1) = temp;

	printf("\nAfter swap Array values are a[0]=%d  a[1]=%d\n",*p,*(p+1));

}
