/*3) declare different pointers with different data types. 
  Print the sizes of the pointer variables using sizeof operator. 
  Also print the sizeof pointer variables with indirection operators. Observe the results.*/


#include<stdio.h>
int main()
{
	int *p1;
	float *p2;
	char *p3;
	double *p4;
	printf("\nSize of integer pointer is %zu",sizeof(p1));
	printf("\nSize of float pointer is %zu",sizeof(p2));
	printf("\nSize of character pointer is %zu",sizeof(p3));
	printf("\nSize of double pointer is %zu",sizeof(p4));

	printf("\nprinting the sizeof pointer variables with indirection operators:");
	printf("\nSize of integer pointer is %zu",sizeof(*p1));
	printf("\nSize of float pointer is %zu",sizeof(*p2));
	printf("\nSize of character pointer is %zu",sizeof(*p3));
	printf("\nSize of double pointer is %zu",sizeof(*p4));
}

