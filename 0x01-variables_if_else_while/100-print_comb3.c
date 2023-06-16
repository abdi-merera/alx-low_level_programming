#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of two digits
 *              in ascending order.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 0; digit1 <= 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 9; digit2++)
		{
			putchar('0' + digit1);
			putchar('0' + digit2);

			/* Check if it's the last combination */
			if (!(digit1 == 8 && digit2 == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	/* Print a newline character to move to the next line */
	putchar('\n');
	return (0);
}
