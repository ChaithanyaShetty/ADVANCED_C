/*4) Write a swap function to swap the values of two character variables.*/

#include<stdio.h>
void SWAP(char *a,char *b)
{
	*a = *a ^ *b;
	*b = *b ^ *a;
	*a = *a ^ *b;


}
int main()
{
	char a='A';
	char b='b';
	SWAP(&a,&b);
	printf("\nAfter Swap a=%c b=%c",a,b);
}
