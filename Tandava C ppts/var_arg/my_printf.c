#include<stdio.h>
#include<stdarg.h>
void my_printf(const char *,...); 
void print(char *);
int main()
{
  int x = 10;
  char ch = 'A';
  float f = 22.7;
  char a[] = "vector india";
	
  my_printf("x = %d\n",x);
  my_printf("ch = %c\n",ch);
  my_printf("f = %f\n",f);
  my_printf("a = %s\n",a);
	
my_printf("x = %d  ch = %c  f = %f  a = %s\n",x,ch,f,a);	
}
void my_printf(const char *p,...) 
{
	int i,r;
	float f;
	char ch,a[20];
	va_list ap;
	va_start(ap,p);
	for(i=0;p[i];i++)
	{
		if(p[i] == '%')
		{
			i++;
			if(p[i]=='d') {
			r = va_arg(ap,int);	
			sprintf(a,"%d",r);
			print(a);
			}
			else if(p[i]=='c') {
			ch = va_arg(ap,int);	
			putchar(ch);
			}   
			else if(p[i]=='f') {
			f = va_arg(ap,double);	
			sprintf(a,"%f",f);
			print(a);
			}
			else if(p[i]=='s') {
			char *cp = va_arg(ap,char *);
			print(cp);
			}
		}
		else
		putchar(p[i]);
	}
}
void print(char *p)
{
	int i;	
	for(i=0;p[i];i++)
	putchar(p[i]);
}
