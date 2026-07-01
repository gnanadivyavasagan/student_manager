#include<stdio.h>
void swap(int *,int *);
int main()
{
	int x = 10, y = 20;
	printf("before swap, x = %d y = %d\n",x,y);
	swap(&x,&y);
   	printf("after swap, x = %d y = %d\n",x,y);
}
void swap(int *p,int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
