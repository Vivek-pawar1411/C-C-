#include<stdio.h>
int main()
{
    int num;
    printf("Enter the 4 digit number");
    scanf("%d",&num);
    int num1=num;
    int x_1=num1/1000;
    printf("face value of %d is %d\n",x_1,x_1);
    num%=1000;
     int x_2=num1/100;
    printf("face value of %d is %d\n",x_2,x_2);
    num%=100;
     int x_3=num1/10;
    printf("face value of %d is %d\n",x_3,x_3);
    num%=10;
    printf("face value of %d is %d\n",num1,num1);
    printf("%d=%d+%d+%d+%d",num,x_1*1000,x_2*100,x_3*10,num1);
    int reverse =0;
    reverse=num*1000+x_3*100+x_2*10+x_1;
    printf("\nreverse number of %d is%d",num,reverse);
    return 0;
}