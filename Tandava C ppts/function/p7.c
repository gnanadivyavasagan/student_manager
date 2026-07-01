//pass 1D-array to a function
#include<stdio.h>
void fun(int *,int);
int main()
{
	int a[] = {10,20,30,40,50};
	int n = sizeof a/sizeof a[0];
	fun(a,n);
}
void fun(int *p,int n)
{
	int i;
	printf("In fun()...\n");
	for(i=0;i<n;i++)
	printf("%d ",*p++);
	printf("\n");		
}
