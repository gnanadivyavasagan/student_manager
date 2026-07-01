




#include<stdio.h>
int sum(int,int);  //function declaration
int main() //calling function
{
	int x,y,z;
	printf("Enter the x,y values\n");
	scanf("%d%d",&x,&y);

	z = sum(x,y); //function call, (x,y)--> actual arguments

	printf("z = %d\n",z);
}
int sum(int a,int b) //function defintion //called function
{				//(a,b)--> formal arguments
	printf("sum()...\n");
	return a+b;
}
