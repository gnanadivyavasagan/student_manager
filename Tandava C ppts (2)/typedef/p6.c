#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	float marks;
};
int main()
{
	typedef struct student ST;
	ST s = {10,"aaa",99.8};
	printf("%d  %s  %f\n",s.roll,s.name,s.marks);
}
