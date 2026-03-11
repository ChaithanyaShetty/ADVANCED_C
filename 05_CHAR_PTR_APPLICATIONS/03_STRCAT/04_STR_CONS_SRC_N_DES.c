//3) Implement your own string concatenation function.
//4) string constant as destination and string constant as source


#include<stdio.h>
#include<string.h>
void concat (const char *s1,const char *s2)
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
	char *s1="naga";
	char *s2="chaithanya";
	concat(s1,s2);

//it is impossible in C to perform concatenation, because string constants (literals) are stored in read-only memory.
}
