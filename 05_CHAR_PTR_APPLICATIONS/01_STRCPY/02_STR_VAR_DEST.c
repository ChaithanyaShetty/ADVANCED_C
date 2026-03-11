//2) string variable as destination and string constant as source
#include<stdio.h>
void copy(char des[],char *src)
{
	int i;
	for(i=0;src[i]!='\0';i++)
	{
		des[i]=src[i];
	}
	printf("\nString is %s",des);
}
int main()
{
	char *src="hello";
	char des[10] ="world";
	copy(des,src);
}
