//12) Write a program to replace a given character by another character in a string using pointers.

#include<stdio.h>
#include<string.h>
void REPLACE(char *p1, char n1,char n2)
{
	while(*p1!='\0')
	{
		if(n1==*p1)
		{
			*p1=n2;
		}
		p1++;
	}


}
int main()
{
	char s1[20];
	char n1,n2;
	printf("Enter String 1: ");
	scanf("%s",s1);
	printf("\nString1 is %s",s1);
	printf("\nEnter the replace charcter: ");
	scanf(" %c",&n1);
	printf("\nEnter the updating character to replace  old charcter: ");
	scanf(" %c",&n2);
	REPLACE(s1,n1,n2);
	printf("\nREPLACED string is %s",s1);


}
