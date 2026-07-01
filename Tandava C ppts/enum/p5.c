#include<stdio.h>
enum e { SUN,MON,TUE,WEN,THU,FRI,SAT }; 
int main()
{
	enum e day;
	printf("size : %d\n",sizeof(enum e));
	printf("size : %d\n",sizeof(day));
	printf("size : %d\n",sizeof(SUN));

	//day = SAT;                         //day --> enum e
	//day = SUN;                         //&day -> enum e *
	printf("Enter the enumerator number\n");
	scanf("%d",(int *)&day); 

	if(day == SUN)
	printf("Holiday...\n");
	else if(day == SAT)
	printf("half working day...\n");
	else
	printf("working day...\n");
}
