#include<stdio.h>
union U
{
	struct st1
	{
		char c[2];
		char ch[2];
	}v1;
	struct st2
	{
		short int x;
		short int y;
	}v2;
}var = {12,1,15,1};
int main()
{
	printf("%d  %d\n",var.v2.x,var.v2.y);
}
