//3) Implement your own string concatenation function.
//1) string constant as destination and string variable as source

#include<stdio.h>
#include<string.h>
void concat(char s2[],const char *s1)
{
	int r=strlen(s2);
	printf("\nLength of s2 is %d",r);
	int i;
	for(i=0;s1[i]!='\0';i++)
	{
		s2[r+i]=s1[i];
	}
	s2[r+i]='\0';
	printf("\nConcatenated String is %s",s2);

}
int main()
{
	char *s1="naga";
	char s2[20]="chaithanya";
	concat(s2,s1);


}
