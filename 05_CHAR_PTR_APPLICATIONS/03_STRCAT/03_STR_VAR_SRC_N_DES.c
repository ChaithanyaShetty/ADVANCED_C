//3) Implement your own string concatenation function.
//3) string variable as destination and string variable as source

#include<stdio.h>
#include<string.h>
void concat(char s1[],char s2[])
{
	int r=strlen(s1);
	printf("\nLength of s1 is %d",r);
	int i;
	for(i=0;s2[i]!='\0';i++)
	{
		s1[r+i]=s2[i];
	}
	s1[r+i]='\0';
	printf("\nConcatenated String is %s",s1);

}
int main()
{
	char s1[20]="naga";
	char s2[20]="chaithanya";
	concat(s1,s2);


}
