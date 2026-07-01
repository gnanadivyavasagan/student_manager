#include<stdio.h>
#include<string.h>
char *my_strstr(char *,char *);
int main()
{
	char m[20],s[20];
	printf("Enter the main string\n");
	scanf("%s",m);
	printf("Enter the sub string\n");
	scanf("%s",s);

	//char *p = strstr(m,s);
	char *p = my_strstr(m,s);

	if(p == NULL)
	printf("sub string doesn't found\n");
	else
	printf("sub string is found at ---> %s\n",p);
}
char *my_strstr(char *p,char *q)
{
	int i,len = strlen(q);
	
	for(i=0;p[i];i++)
	{
		if(strncmp(p+i,q,len)==0)
		return p+i;
	}

	return NULL;
}
/*
char *my_strstr(char *p,char *q)
{
	int i,j;
	for(i=0;p[i];i++)
	{
		if(q[0]==p[i])
		{
			for(j=1;q[j];j++)
			{
				if(p[i+j]!=q[j])
				break;	
			}

			if(q[j]=='\0')
			return p+i;
		}
	}

	return NULL;
}
*/
