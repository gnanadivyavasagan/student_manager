//pass 1D-array to a function
#include<stdio.h>
void fun(int *p,int n);
int main()
{
	int a[] = {10,20,30,40,50};
	int i,n = sizeof a/sizeof a[0];
	fun(a,n);
	printf("in main()...\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
}
void fun(int *p,int n)
{
	int i;
	printf("In fun()...\n");
	for(i=0;i<n;i++)
	printf("%d ",p[i]);
	printf("\n");		
	
	for(i=0;i<n;i++)
	p[i] = p[i]+5;
}
