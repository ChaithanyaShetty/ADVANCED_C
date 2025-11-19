//strcat using pointers
#include<stdio.h>
#include<string.h>
void CATT(char *p1, const char *p2, int c, int r)
{
	// char *START=p1;
	p1=p1+c;
	while(*p2!='\0')
	{
		*p1=*p2;
		p1++;
		p2++;
	}
	*p1='\0';

}
int main()
{
	char s1[50],s2[20];

	printf("Enter string 1: ");
	scanf("%s",s1);
	printf("Enter string 2: ");
	scanf("%s",s2);
	int c=strlen(s1);
	int r=strlen(s2);
	printf("\nString1 Length is %d ",c);
	printf("\nString1 Length is %d ",r);
	CATT(s1,s2,c,r);

	printf("\nConcatenated String is %s",s1);



}
