#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],d[20];
	int n;
	printf("Enter the source\n");
	scanf("%s",s);
	printf("Enter the n value\n");
	scanf("%d",&n);

	char *p = strncpy(d,s,n);
	//char *p = my_strncpy(d,s,n);
	d[n] = '\0';

	printf("d = %s\n",d);
	printf("p = %s\n",p);
}
