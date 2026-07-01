#include<stdio.h>
#include<string.h>
char *my_strchr(char *,char);
int main()
{
	char str[20],ch;
	printf("Enter the string\n");
	scanf("%s",str);

	printf("Enter the char\n");
	scanf(" %c",&ch);

	//char *p = strchr(str,ch);
	char *p = my_strchr(str,ch);

	if(p == NULL)
	printf("char doesn't found\n");
	else
	printf("char found at --> %s\n",p);	
}
char *my_strchr(char *p,char c)
{
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]==c)
		return p+i;
	}

	return NULL;	
}


