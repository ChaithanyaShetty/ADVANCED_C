//strrev using pointers

#include<stdio.h>
#include<string.h>
void REVERSE(const char *p1,char *p2, int r)
{
	char *START = p2;       // Save starting address
	p2=p2+(r-1);            // Move to last index
	while(*p1!='\0')
	{
		*p2=*p1;
		p1++;
		p2--;
	}
	START[r] = '\0';      // Correct null terminator
}
int main()
{
	char s1[20];
	char s2[20];
	printf("Enter String 1: ");
	scanf("%s",s1);
	printf("\nString1 is %s",s1);
	int r=strlen(s1);
	printf("\nString1 length is %d",r);
	REVERSE(s1,s2,r);

	printf("\nReversed string S2 is %s",s2);

}
