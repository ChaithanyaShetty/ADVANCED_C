
//4) string constant as destination and string constant as source


#include<stdio.h>
void copy(char *des,char *src)
{
	int i;
	for(i=0;src[i]!='\0';i++)
	{
		des[i]=src[i];
	}
	des[i]='\0';
	printf("\nString is %s",des);
}
int main()
{
	char *src="hello";
	char *des="world";
	copy(des,src);

}
/*Both source and destination are in read-only memory, and string literals cannot be modified.*/
