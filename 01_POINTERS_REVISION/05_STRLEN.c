//strlen using pointers

#include<stdio.h>
int LENGTH(const char *ptr,int n)
{
	int i=0;
	while(*ptr!='\0'&& i<n)
	{
		i++;
		ptr++;
	}
	return i;
}
int main()
{
	int n;
	printf("Enter String Size: ");
	scanf("%d",&n);
	char str[n];
	printf("\nEnter the string: ");
	scanf("%s",str);
	//char *ptr=str;
	int r=LENGTH(str,n);

	printf("Length of the string is %d",r);

}
