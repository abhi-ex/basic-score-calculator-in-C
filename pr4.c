#include<stdio.h>
int main()
{
    int a, b, input;
    printf("enter the first number:");
    scanf("%d", &a);
    printf("enter the second number:");
    scanf("%d", &b);
    printf("enter 1.Addition, 2.subtraction, 3.multiplication, 4.division\n:");
    scanf("%d", &input);
    switch (input)
    {
    case 1:
        printf("addition= %d\n", a + b);
        break;
    case 2:
        printf("subtraction= %d\n", a - b);
        break;
    case 3:
        printf("multiplication = %d\n", a * b);
        break;
    case 4:
        printf("division = %d\n", a / b);
        break;
    default:
        printf("invalid number\n");
        break;
    }
    return 0;
}
