//11) implement itoa function using pointers

#include<stdio.h>
void REVERSE(int *p,int c)
{
	int *start=p;
	int *end=p+(c-1);
	int temp;
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
	printf("\nArray Elements are: ");
	int i;
	for(i=0;i<c;i++)
	{
		printf("%d",*(p+i));
	}
}
void DIVIDE(int n,int *p)
{

	int c=0;
	int *base=p;        //assign to another pointer to keep base address
	while(n>0)
	{
		*p=n%10;
		n=n/10;
		p++;
		c++;
		
	}
	printf("\nCount is %d",c);
	REVERSE(base,c);

}
int main()
{
	int n,a[10];
	printf("Enter value of n: ");
	scanf("%d",&n);
	DIVIDE(n,a);
}
