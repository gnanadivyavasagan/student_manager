#include<stdio.h>
int main()
{
	int x = 300;
	char *p = (char *)&x;

	if(*p == 44)
	printf("little endian\n");
	else
	printf("big endian\n");

}
