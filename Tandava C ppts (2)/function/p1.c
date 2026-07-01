#include<stdio.h>
int sum_of_digits(int); //function declaration
int main() //calling function for sum_of_digits
{
        int n,ret;
        printf("Enter the number\n");
        scanf("%d",&n);

        ret = sum_of_digits(n); //function call, n is actual argument
        printf("sum of digits = %d\n",ret);
}
int sum_of_digits(int num)//function definition,num is formal argumen
{                        //& called function for main()
        int sum = 0,rem;
        printf("sum_of_digits()\n");
        while(num != 0)
        {
                rem = num%10;
                sum = sum+rem;
                num = num/10;
        }
        return sum;
}