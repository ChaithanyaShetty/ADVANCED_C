//11) implement itoa function

#include<stdio.h>
void REVERSE(int a[],int c)
{
	int i,temp,j;
	for(i=0,j=c-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	printf("\nArray Elements are: ");
	for(i=0;i<c;i++)
	{
		printf("%d",a[i]);
	}
}

void DIVIDE(int n,int a[])
{

	int i=0,c=0;
	while(n>0)
	{
		a[i]=n%10;
		n=n/10;
		c++;
		i++;
	}
	printf("\nCount is %d",c);
	REVERSE(a,c);

}
int main()
{
	int n,a[10];
	printf("Enter value of n: ");
	scanf("%d",&n);
	DIVIDE(n,a);
}
