#include <stdio.h>
float num1, num2;
char a;

int plus(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;
}
int decrement(int num1, int num2)
{
    int sum;
    sum = num1 - num2;
    return sum;
}
int power(int num1, int num2)
{
    int sum;
    sum = num1 * num2;
    return sum;
}
float divide(int num1, int num2)
{
    int sum;
    sum = num1 / num2;
    return sum;
}

void main()
{
    printf("*************************************\n");
    printf("Input your fisrt number :  ");
    scanf("%f", &num1);
    printf("Input your operator + - * / : ");
    scanf("%s", &a);
    printf("Input your second number :  ");
    scanf("%f", &num2);
    switch (a)
    {
    case '+':
        printf("Total : %f ",plus(num1,num2));
        break;
    case '-':
        printf("Total : %f ",decrement(num1, num2));
        break;
    case '*':
        printf("Total : %f ",power(num1, num2));
        break;
    case '/':
        printf("Total : %.2f ",divide(num1, num2));
        break;
    default:
        printf("ERROR!!");
        break;
    }
    printf("\n*************************************");
}