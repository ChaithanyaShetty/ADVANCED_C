/*1) WAP to display the word expansion of a number without using switch/if statement
  eg., Input : 789
Output : Seven Eight Nine*/

#include<stdio.h>
int main()
{

	char *number[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	char a[11];
	printf("\nEnter the characters: ");
	scanf("%s",a);
	printf("%s\n",a);
	int i,word=0;
	for(i=0;a[i]!='\0';i++)
	{
		word=a[i]-'0';
		printf("\n%s",number[word]);
	}
}

