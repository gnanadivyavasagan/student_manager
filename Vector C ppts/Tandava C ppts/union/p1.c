#include<stdio.h>
union U
{
	int x;
	char ch;
	long long int y;
};
int main()
{
	union U v;
	printf("sizeof v : %d\n",sizeof v);
	printf("&v.x : %p\n",&v.x);
	printf("&v.ch : %p\n",&v.ch);
	printf("&v.y : %p\n",&v.y);
}
