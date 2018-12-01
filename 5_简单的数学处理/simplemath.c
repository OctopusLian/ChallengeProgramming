#include <stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char str1;
    char str2; 
    int num1;
    int num2;
    //int num3;
    num1 = str1 - '0';
    num2 = str2 - '0';
    //num3 = num1 + num2;

    printf("What is the first number?"); scanf("%d",&num1);
    printf("What is the second number?"); scanf("%d",&num2);

    printf("%d + %d = %d",num1,num2,(num1 + num2));
    printf("%d - %d = %d",num1,num2,(num1 - num2));
    printf("%d * %d = %d",num1,num2,(num1 * num2));
    printf("%d / %d = %d",num1,num2,(num1 / num2));
}