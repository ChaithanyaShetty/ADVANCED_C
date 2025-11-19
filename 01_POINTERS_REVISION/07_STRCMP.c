//strcmp using pointers
#include<stdio.h>
int COMPARE(const char *p1, const char *p2)
{

	while(*p1!='\0'&&*p2!='\0')
	{
		if(*p1==*p2)
		{
			p1++;
			p2++;

		}
		else
		{
			return (*p1-*p2);
		}
	}
	return (*p1-*p2);
}
int main()
{
	char s1[20];
	char s2[20];
	printf("Enter the string below 20 characters");
	printf("\nEnter string1: ");
	scanf("%s",s1);
	printf("\nEnter string2: ");
	scanf("%s",s2);
	int r= COMPARE(s1,s2);
	printf("\nR value is %d",r);
	if(r>0)
		printf("\nString 1 is bigger");
	else if(r<0)
		printf("\nString 2 is bigger");
	else
		printf("Both strings are equal");




}
