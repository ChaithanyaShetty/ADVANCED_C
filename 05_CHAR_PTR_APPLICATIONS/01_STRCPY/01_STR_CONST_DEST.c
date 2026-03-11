//1) string constant as destination and string variable as source

#include<stdio.h>
void copy(char *src,char *des)
{
	int i;
	for(i=0;src[i]!='\0';i++)
	{
		src[i]=des[i];
	}
	printf("\nString is %s",src);
}
int main()
{
	char *src="hello";
	char des[10] ="world";
	copy(src,des);
}

/*String constants are stored in read-only memory.
  When the program tries to copy "world" into "hello", it attempts to modify read-only memory, which is not allowed by the operating system.
  So the program is terminated.*/
