#include<stdio.h>
void swap(int x,int y);
int main()
{
	int x = 10, y = 20;
   printf("main(),before swap, x = %d y = %d\n",x,y);
	swap(x,y);
   printf("main(),after swap, x = %d y = %d\n",x,y);
}
void swap(int x,int y)
{
	printf("In swap()...\n");
	printf("before swap, x = %d y = %d\n",x,y);
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("after swap, x = %d y = %d\n",x,y);
}
