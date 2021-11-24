#include <stdio.h>
#include <stdlib.h>

/* int main()
{
    printf("\n");
    int selection = 1;

    switch (selection)
    {
        case 1:
            printf("Selected option 1\n");
            break;
        case 2:
            printf("Selected option 2\n");
            break;
        default:
            printf("Default selection\n");
            break;

    } */
    typedef enum {ON, OFF} LedState; // create a new state which can assume the values ON, OFF. Enums have values of 0+, so ON = 0 and OFF = 1

/* int main()
{
    LedState led = OFF;

    switch (led)
    {
        case ON:
            printf("Led is ON\n");
            break;
        case OFF:
            printf("Led is OFF\n");
            break;
        } */

int main()
{
    char operator;
    double operand_a, operand_b, result;

    printf("Enter the operator: "); // + - * /
    scanf("%c", &operator);
    printf("Enter the first operand: ");
    scanf("%lf", &operand_a);
    printf("Enter the second operand: ");
    scanf("%lf", &operand_b);

    int error = 0;

    switch (operator)
    {
    case '+':
        result = operand_a + operand_b;
        break;
    case '-':
        result = operand_a - operand_b;
        break;
    case '*':
        result = operand_a * operand_b;
        break;
    case '/':
        result = operand_a / operand_b;
        break;
    default:
        error = 1;
        break;
    }
    if (error)
    {
        printf("Error: Unknown operator.");
    }
    else
    {
        printf("%.lf %c %.lf = %.lf", operand_a, operator, operand_b, result);
    }
    printf("\n\n");
    return EXIT_SUCCESS;
}
