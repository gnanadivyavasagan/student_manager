#include<stdio.h>
int main()
{
	enum {white = 1,yellow,pink = 5};
	enum {blue = 3,black,yellow = 7};  //error
                                          
	printf("white : %d\n",white);
	printf("black : %d\n",black);
	printf("yellow : %d\n",yellow);
}


















//No 2 enumerators names are same in the same scope
