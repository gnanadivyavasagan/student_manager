//counting method
#include<stdio.h>
#include<stdarg.h>
void fun(int,...);
int main()
{
	fun(2,10,20);
	fun(3,11,22,33);
	fun(4,12,24,36,44);
}
void fun(int n,...)
{
	int i,ret;
	va_list ap;
	va_start(ap,n);

	for(i=0;i<n;i++) {
	ret = va_arg(ap,int);
	printf("%d  ",ret);
	}
	printf("\n");
	va_end(ap);	
}
