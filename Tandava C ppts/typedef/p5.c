#include<stdio.h>
typedef struct st 
{
	int roll;
	char name[20];
	float marks;
}ST;
void setdata(ST *);  //void setdata(struct st *)
void print(ST *);    //void print(struct st *)
int main()
{
	int i;
        ST s[3];  //struct st s[3]
	setdata(s); 
	print(s);
}
void setdata(ST *p) 
{
	int i;   
      printf("Enter the 3 student records\n");
      for(i=0;i<3;i++)
      scanf("%d%s%f",&p[i].roll,p[i].name,&p[i].marks);
}
void print(ST *p)
{    
	int i;   
      for(i=0;i<3;i++)
      printf("%d %s %f\n",p[i].roll,p[i].name,p[i].marks);
}



