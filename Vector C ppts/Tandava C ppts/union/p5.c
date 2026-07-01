#include<stdio.h>
union U
{
	int x;
	char ch;
};
int main()
{
	union U v = {300};
	
	if(v.ch == 44)
	printf("little endian\n");
	else
	printf("big endian\n");
}
