1 int (*p)(int, int);

p is a function pointer that points to a function taking two int arguments.

The function returns an int.

Used to call functions dynamically (like calculator using add/sub/mul).
/*
#include <stdio.h>

int add(int a, int b)
{
return a + b;
}

int main()
{
int (*p)(int, int);   // function pointer
p = add;              // points to add function

printf("%d", p(10, 20));   // function call using pointer
return 0;
}
 */

2 int *p(int, int);

p is a function, not a pointer.

The function takes two int arguments.

It returns a pointer to int (int *).

*/#include <stdio.h>

int* getAddress(int a, int b)
{
	static int sum;
	sum = a + b;
	return &sum;     // returns int pointer
}

int main()
{
	int *p;
	p = getAddress(10, 20);   // function call

	printf("%d", *p);        // dereference pointer
	return 0;
}
*/

🔑 Key difference (one line)

	(*p) → pointer to function

	*p() → function returning pointer

	👉 Brackets decide the meaning — very important in C.
