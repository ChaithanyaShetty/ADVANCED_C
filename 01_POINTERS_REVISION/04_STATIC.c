/*4) Write a function that communicates with main using a single static variable without taking any input arguments.
  Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.
  eg., print the square of each number of an array :
  for each number of the array :
  call the function
  main gets the static variable address as return value from function.
  main puts the array element in static variable.
  in the function :
  create static variable.
  if static variable value is not zero, print its square.
  function sends static variable address back to main.*/


#include<stdio.h>
int *COMMUTE(void)
{
	static int x;
	if(x!=0)
	{
		printf("\n%d ",(x*x));
	}
	return &x;
}
int main()
{
	int n,i;
	printf("\nEnter Array Size: ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter Array Elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\nArray Elements are : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

	for(i=0;i<n;i++)
	{
		int *addr= COMMUTE();
		*addr = a[i];
	}
	COMMUTE();
}
/*
MAIN                              FUNCTION
-----                             --------
Call COMMUTE()  ------------->    x=0 → prints nothing
addr = &x  <-------------------    return &x
*addr = a[0]  (x = 3)

Call COMMUTE()  ------------->    x=3 → prints 9
addr = &x  <-------------------    return &x
*addr = a[1]  (x = 4)

Call COMMUTE()  ------------->    x=4 → prints 16
addr = &x  <-------------------    return &x
*addr = a[2]  (x = 5)

Final Call COMMUTE() --------->    x=5 → prints 25


CALL #1 → x=0 → print nothing   → main stores 3 into x
CALL #2 → x=3 → print 9         → main stores 4 into x
CALL #3 → x=4 → print 16        → main stores 5 into x
FINAL   → x=5 → print 25

*/
