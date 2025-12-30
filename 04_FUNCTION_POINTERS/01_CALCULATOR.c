/*1)Write the calculator program using function pointers 
  for add, sub, mul, div and mod functions, using a single function pointer.*/

#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int divv(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}
int main()
{
	int a,b,c;
	printf("Enter values of a and b: ");
	scanf("%d%d",&a,&b);

	int (*p)(int,int);
	p=&add;
	c=(*p)(a,b);
	printf("\nSUM is %d",c);
	p=&sub;
	if(b>0)
	c=p(a,b);
	else
	printf("\nB value is 0 not valid for DIV");
	printf("\nSUB is %d",c);
	p=&mul;
	c=p(a,b);
	printf("\nMUL is %d",c);
	p=&divv;
	c=p(a,b);
	printf("\nDIVV is %d",c);
	p=&mod;
	c=p(a,b);
	printf("\nMOD is %d",c);

}

