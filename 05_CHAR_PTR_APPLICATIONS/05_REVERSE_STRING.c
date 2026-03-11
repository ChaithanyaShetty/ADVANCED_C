/*5) implement your own string reverse function using the above swap function to swap the edges while reversing.

  try calling the string reverse function using
  1) string variable
  2) string constant
 */

#include<stdio.h>
#include<string.h>
void SWAP(char *a,char *b)
{
	char temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
void REVERSE(char a[])
{
	int l;
	l=strlen(a);
	printf("\nString Length is %d",l);
	int i,j;
	l=l-1;
	for(i=0,j=l;i<j;i++,j--)
	{
		SWAP(&a[i], &a[j]);
	}

	printf("\nReverse of string is %s",a); 

}
int main()
{
	char a[]="chaithanya";

	REVERSE(a);
}

/*When we write `char a[] = "chaithanya";` and call `REVERSE(a);`, the string `"chaithanya"` is copied into a writable array in memory, 
so the reverse function can safely swap characters at the edges and reverse the string. 
But when we directly call `REVERSE("chaithanya");`, the string `"chaithanya"` is a string literal stored in read-only memory, 
and since the reverse function tries to modify its characters, the program will fail or crash.*/
