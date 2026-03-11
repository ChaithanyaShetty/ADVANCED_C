//2) Implement your own string compare function and try calling the function using two string constants as input arguments.

#include<stdio.h>
int compare(const char *s1, const char *s2)
{
	int i;
	for(i=0;s1[i] !='\0' && s2[i]!='\0';)
	{
		if(s1[i]!=s2[i])
		{
			return s1[i]-s2[i];
		}
		i++;
	}

	return s1[i]-s2[i];
}
int main()
{
	char *s1="naga";
	char *s2="nagaa";
	int r=compare(s1,s2);
	if(r==0)
		printf("\nBoth are same %d",r);
	else if(r>0)
		printf("\nstring1 is bigger %d",r);
	else
		printf("\nString2 is bigger %d",r);
}
