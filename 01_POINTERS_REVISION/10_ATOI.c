//10) Implement atoi function ( to take a numerical string and return integer)


#include<stdio.h>
#include<string.h>
void ATOI(char a[],int n)
{
	int i,c=0;
	for(i=0;i<n;i++)
	{
		int r= a[i] -'0';
		c=(c*10)+r;
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

	for (i = 0; i < r; i++)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			valid = 0;
			break;
		}
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
