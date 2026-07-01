#include<stdio.h>
union U
{
	double f;
	long long int x;
};
int main()
{
	union U v = {22.7};
	int  i;
	for(i=63;i>=0;i--)
	printf("%lld",v.x>>i&1);
	printf("\n");
}
