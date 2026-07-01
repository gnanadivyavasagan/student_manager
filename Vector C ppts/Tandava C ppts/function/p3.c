#include<stdio.h>
int rev_num(int n)
{
	int rev=0;
	while(rev = rev*10+(n%10),n/=10,n!=0);
	return rev;
}
int main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
	int ret = rev_num(num);
	printf("ret = %d\n",ret);
}
