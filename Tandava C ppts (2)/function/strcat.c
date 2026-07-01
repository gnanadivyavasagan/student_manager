#include<stdio.h>
#include<string.h>
char *my_strcat(char *,char *);
int main()
{
	char s[20],d[20];
	printf("Enter the source\n");
	scanf("%s",s);
	printf("Enter the destination\n");
	scanf("%s",d);

	//char *p = strcat(d,s);
	char *p = my_strcat(d,s);

	printf("s = %s\n",s);
	printf("d = %s\n",d);
	printf("p = %s\n",p);
}
char *my_strcat(char *p,char *q)
{
	int i,j;
	for(i=0;p[i];i++);
	for(j=0;p[i] = q[j];j++,i++);

	return p;
}





