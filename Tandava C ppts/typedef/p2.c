#include<stdio.h>
int main()
{
	typedef float temp_sens;
	temp_sens t1,t2,t3;

	t1 = 34.5;
	t2 = 28.4;
	t3 = 18.9;
	
	printf("t1 = %f t2 = %f  t3 = %f\n",t1,t2,t3);

	typedef char UP_CHAR;
	UP_CHAR ch = 'A';
	printf("ch = %c\n",ch);
}
