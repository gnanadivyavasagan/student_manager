#include<stdio.h>
int main()
{
	char ch;
	int x;
	float f;
	char s[20];
	char str[] = "A 1234 22.7 vector";

	sscanf(str,"%c%d%f%s",&ch,&x,&f,s);
	
	printf("ch = %c x = %d f = %f s = %s\n",ch,x,f,s);
}
