/*3)"Write the calculator program using a function that accepts 
  a function pointer and the operand values as arguments and invokes it. 
  In main function, simply invoke this function by sending appropriate function address, 
  based on operator chosen. eg., in main case '+' :invokeptr(add , x,y); 
  invokeptr(int (*fptr) (int,int) , int x, int y) { printf(""%d\n"",fptr(x,y)); }"*/



#include<stdio.h>
int add(int a,int b) { return a+b;}
int sub(int a,int b) {return a-b;}
int mul(int a,int b) {return a*b;}
int divv(int a,int b) {return a/b;}
int mod(int a,int b) {return a%b;}
void invokeptr(int (*fptr) (int,int) , int x, int y) 
{ 
	printf("%d\n",fptr(x,y)); 

}
int main()
{
	int a,b;
	printf("Enter values of a and b:");
	scanf("%d%d",&a,&b);
	char ch;
	printf("\nenter the Arithmetic operator to perform operation:");
	scanf(" %c",&ch);
	switch(ch)
	{
		case '+' : invokeptr(add,a,b);
			   break;
		case '-' : invokeptr(sub,a,b);
			   break;
		case '*' : invokeptr(mul,a,b);
			   break;
		case '/' : invokeptr(divv,a,b);
			   break;
		case '%' : invokeptr(mod,a,b);
			   break;
		default: printf("\nNot valid operator");
	}
}

/*
   1. `add` is defined as `int add(int a, int b)`, so it **takes two integers** and returns an integer.
   2. The type of `add` is therefore **`int (int, int)`**.
   3. A function pointer must **exactly match the function’s signature**.
   4. So we declare it as `int (*fptr)(int, int)` to match `add`.
   5. This allows `fptr` to point to `add` and call it using `fptr(x, y)`.
 */
