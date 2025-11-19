//strcpy using pointers

#include<stdio.h>
void COPY(const char *ptr1, char *ptr2)
{
	int i=0;
	while(*ptr1!='\0')
	{

		*ptr2=*ptr1;
		i++;
		ptr1++;
		ptr2++;
	}
	// printf("\nI value is %d",i);
	*ptr2='\0';


}
int main()
{
	char str1[20];
	char str2[20];
	printf("\nEnter the string1: ");
	scanf("%20s",str1);

	COPY(str1,str2);
	printf("\nCOPIED STRING2 IS %s",str2);


}
