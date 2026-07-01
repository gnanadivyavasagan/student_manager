#include<stdio.h>
int main()
{
	typedef int int_array[5];
	typedef int counter;

	int_array a,b;
	counter c;

	printf("sizeof a : %d\n",sizeof a);
	printf("sizeof b : %d\n",sizeof b);

	printf("Enter the elements for a\n");
	for(c=0;c<5;c++)
	scanf("%d",&a[c]);

	for(c=0;c<5;c++)
	printf("%d   %u\n",a[c],(unsigned)&a[c]);
}
