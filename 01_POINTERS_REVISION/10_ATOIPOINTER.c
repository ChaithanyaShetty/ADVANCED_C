//10) Implement atoi function ( to take a numerical string and return integer) using pointers


#include<stdio.h>
#include<string.h>
void ATOI(char *p,int n)
{
	int i,c=0;
	for(i=0;i<n;i++)
	{

		int r= *p -'0';
		c=(c*10)+r;
		p++;

	}

	printf("\nAfter Converting ARRAY TO INT is C=%d",c);

}
int main()
{

	char a[20];
	int i;
	printf("\nEnter the string: ");
	scanf("%20s",a);

	printf("\nString is %s",a);
	int r=strlen(a);
	printf("String length is %d",r);

	int valid = 1;
	char *p=a;
	while(*p!='\0')
	{
		if (*p < '0' || *p > '9')
		{
			valid = 0;
			break;
		}
		p++;
	}

	if (valid)
	{
		ATOI(a, r);
	}
	else
	{
		printf("\nGive Valid input");
	}

}
