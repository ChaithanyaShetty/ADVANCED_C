/*2)Rewrite the calculator program using array of function pointers.*/

#include<stdio.h>
int add(int a, int b){return a+b;}
int sub(int a, int b){return a-b;}
int mul(int a, int b){return a*b;}
int divv(int a, int b){return a/b;}
int mod(int a, int b){return a%b;}


int main()
{
	int a,b;
	printf("Enter a and b Values: ");
	scanf("%d%d",&a,&b);
	int (*p[5])(int,int)={add,sub,mul,divv,mod};
	int i;
	for(i=0;i<5;i++)
	{
		int c= p[i](a,b);
		printf("\n%d",c);
	}
}
