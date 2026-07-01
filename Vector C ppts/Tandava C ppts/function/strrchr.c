#include<stdio.h>
#include<string.h>
char *my_strrchr(char *,char);
int main()
{
	char str[20],ch;
	printf("Enter the string\n");
	scanf("%s",str);

	printf("Enter the char\n");
	scanf(" %c",&ch);

	//char *p = strrchr(str,ch);
	char *p = my_strrchr(str,ch);

	if(p == NULL)
	printf("char doesn't found\n");
	else
	printf("char found at --> %s\n",p);	
}
char *my_strrchr(char *p,char c)
{
	int i;
	for(i=0;p[i];i++);
	for(i=i-1;i>=0;i--)
	{
		if(p[i]==c)
		return p+i;
	}
		return NULL;		
}
