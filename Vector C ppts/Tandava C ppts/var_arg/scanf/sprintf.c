#include<stdio.h>
int main()
{
   char ch = 'A';
   int x = 1234;
   float f = 22.7;
   char a[50];

   sprintf(a,"ch = %c  x = %d  f = %f",ch,x,f);
   printf("a-->  %s\n",a);
}


