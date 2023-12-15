#include <stdio.h>

/**
 * add - adds two numbers
 * @a: the first operand
 * @b: the second operand
 *
 * Return: the sum of a and b
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * sub - subtract two numbers
 * @a: the first operand
 * @b: the second operand
 *
 * Return: the result of subtracting b from a
 */
int sub(int a, int b)
{
    return a - b;
}

/**
 * mul - multiplies two numbers
 * @a: the first operand
 * @b: the second operand
 *
 * Return: the product of a and b
 */
int mul(int a, int b)
{
    return a * b;
}

/**
 * div - divides two numbers
 * @a: the numerator
 * @b: the denominator
 *
 * Return: the result of dividing a by b
 */
int div(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero is undefined\n");
        return 0;
    }
    return a / b;
}

/**
 * mod - finds the modulus of two numbers
 * @a: the dividend
 * @b: the divisor
 *
 * Return: the remainder of the division of a by b
 */
int mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Modulus by zero is undefined\n");
        return 0;
    }
    return a % b;
}

int main(void)
{
    int result;

    result = add(2, 3);
    printf("The sum of two numbers is: %d\n", result);

    return 0;
}
