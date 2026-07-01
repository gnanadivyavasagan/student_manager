#include<stdio.h>
typedef int FUN_DECLARE(int,int);
FUN_DECLARE sum,sub,mul,div;
int main()
{
	int a,b,c,op;
	printf("Enter the a,b values\n");
	scanf("%d%d",&a,&b);

	printf("Enter the option 1)sum 2)sub 3)mul 4)div\n");
	scanf("%d",&op);

	switch(op)
	{
		case 1: c = sum(a,b); break;
		case 2: c = sub(a,b); break;
		case 3: c = mul(a,b); break;
		case 4: c = div(a,b); break;
		default:printf("invalid option...\n");
	}
	printf("c = %d\n",c);
}
int sum(int a,int b)
{
	printf("sum function...\n");
	return a+b;
}
int sub(int a,int b)
{
	printf("sub function...\n");
	return a-b;
}
int mul(int a,int b)
{
	printf("mul function...\n");
	return a*b;
}
int div(int a,int b)
{
	printf("div function...\n");
	return a/b;
}


