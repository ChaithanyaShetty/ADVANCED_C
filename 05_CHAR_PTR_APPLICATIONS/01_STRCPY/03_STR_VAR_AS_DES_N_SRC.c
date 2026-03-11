//3) string variable as destination and string variable as source
#include<stdio.h>
void copy(char des[],char src[])
{
    int i;
    for(i=0;src[i]!='\0';i++)
    {
        des[i]=src[i];
    }
    des[i]='\0';
    printf("\nstring is %s",des);
}
int main()
{
    char src[10]="hello";
    char des[10]="world";
    copy(des,src);
}
