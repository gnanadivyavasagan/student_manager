#include<stdio.h>
enum {white = 1,yellow,pink = 5};
int main()
{
	enum {blue = 3,black,yellow = 7}; 

	printf("white : %d\n",white);  //1
	printf("black : %d\n",black);  //4
	printf("yellow : %d\n",yellow); //7
}

//2 enumerators with same names as global & as local is possible.
