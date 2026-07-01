#include<stdio.h>
int main()
{
	typedef int* INT_PTR;
	typedef int INTEGER;
	
	INTEGER x = 10,y = 20;  //int x = 10, y = 20; 
	INT_PTR p,q;   //int *p, *q;

	p = &x; 
	q = &y;

	printf("x = %d  y = %d\n",x,y);
	printf("*p = %d  *q = %d\n",*p,*q);
}
