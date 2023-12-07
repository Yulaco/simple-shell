#include "shell.h"

/**
 * main - Point of entry.
 *
 * Return: 0.
 */
int main(void)
{
	int num1 = 56, num2 = 4, num3 = 72;

	if (num1 >= num2 && num1 >= num3)
		printf("1st Number = %d\n", num1);
	if (num1 >= num2 && num1 >= num3)
		printf("2nd Number = %d\n", num2);
	if (num1 >= num2 && num1 >= num3)
		printf("3rd Number = %d\n", num3);

	return (0);
}
