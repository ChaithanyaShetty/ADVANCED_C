/*2)Rewrite the calculator program using array of function pointers.*/

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

	int (*p[5])(int,int);
	p[0]=&add;
	c=p[0](a,b);
	printf("\nSUM is %d",c);
	p[1]=&sub;
	c=p[1](a,b);
	printf("\nSUB is %d",c);
	p[2]=&mul;
	c=p[2](a,b);
	printf("\nMUL is %d",c);
	p[3]=&divv;
	c=p[3](a,b);
	printf("\nDIVV is %d",c);
	p[4]=&mod;
	c=p[4](a,b);
	printf("\nMOD is %d",c);

}


