#include<stdio.h>
#include<string.h>
size_t my_strlen(char *p);
int main()
{
	char str[20];
	printf("Enter the string\n");
	scanf("%s",str);

	//int len = strlen(str);
	int len = my_strlen(str);
	printf("string length : %d\n",len);
}
size_t my_strlen(char *p)
{
	int i;
	for(i=0;p[i];i++);
	return i;
}
