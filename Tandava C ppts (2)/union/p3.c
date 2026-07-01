#include<stdio.h>
union U
{
	int x;
	char c;
};
int main()
{
	union U v = {256};
	v.c = 1;

	printf("v.x = %d  v.c = %d\n",v.x,v.c);
}
