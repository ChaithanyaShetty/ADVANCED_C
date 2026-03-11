/*6) define a sizeof macro ,that will find the size of a given variable as parameter, 
  using pointers.*/

#include<stdio.h>
#define SIZEOF(x) ((char *)(&x+1) - (char*)&x)
int main()
{
	int a=1;
	char b='c';
	float c =3.0001;
	double d=9.800;
	printf("\nSize of int is %zu",SIZEOF(a));
	printf("\nSize of char is %zu",SIZEOF(b));
	printf("\nSize of float is %zu",SIZEOF(c));
	printf("\nSize of double is %zu",SIZEOF(d));
}

