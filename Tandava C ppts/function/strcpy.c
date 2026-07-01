#include<stdio.h>
#include<string.h>
char* my_strcpy(char *,const char *);
int main()
{
	char s[20],d[20];
	printf("Enter the source string\n");
	scanf("%s",s);

	//char *p = strcpy(d,s);
	char *p = my_strcpy(d,s);
	printf("s = %s\n",s);
	printf("d = %s\n",d);
	printf("p = %s\n",p);
}
char* my_strcpy(char *p,const char *q)
{
	int i;
	for(i=0;p[i]=q[i];i++);

	return p;
}
