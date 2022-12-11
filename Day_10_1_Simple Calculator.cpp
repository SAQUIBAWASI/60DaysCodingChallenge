#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char ch;
    double a, b;
    while (1) {
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &ch);
        if (ch == 'x')
            exit(0);
        printf("Enter first operand : ");
        scanf("%lf",&a);
        printf("Enter second operand: ");
        scanf("%lf",&b);
        switch (ch) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
            break;
        default:
            printf("Error! please write a valid operator\n");
        }
    }
    return 0;
}
