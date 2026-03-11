/*8)define a sizeof macro ,that will find the size of a given data type as parameter. use pointers.*/


#include<stdio.h>
#define SIZEOF(t) (char *)((t *)0+1) - (char *)((t *)0)
int main()
{
printf("\nSize of datatype int is %zu",SIZEOF(int));
printf("\nSize of datatype char is %zu",SIZEOF(char));
printf("\nSize of datatype float is %zu",SIZEOF(float));
printf("\nSize of datatype double is %zu",SIZEOF(double));
}
