//Null termination method
#include<stdio.h>
#include<stdarg.h>
void fun(int n,...);
int main()
{
	fun(10,20,0);
	fun(11,22,33,0);
	fun(12,24,36,44,0);
}
void fun(int n,...)
{
	int i,ret;
	va_list ap;
	va_start(ap,n);

	printf("%d  ",n);
	while(ret = va_arg(ap,int))
	printf("%d  ",ret);

	printf("\n");
}
