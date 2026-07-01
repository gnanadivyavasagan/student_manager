#include<stdio.h>
void fibo(int);
int main()
{
	int n;
	printf("Enter the n value\n");
	scanf("%d",&n);
	fibo(n);
	printf("\n");
}
void fibo(int n)
{
	int a = 0, b = 1, c;
	while(a <= n)
	{
		printf("%d ",a);
		c = a+b;
		a = b;
		b = c;
	}	
}
//Assignment : WAP to revere the bits of a given integer number using function and also design binary() to print  the number binary before and after it's reverse.


