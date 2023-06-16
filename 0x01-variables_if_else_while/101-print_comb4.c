#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of three digits
 *              in ascending order.
 * Return: Always 0 (Success)
 */
int main(void)
{	
	int digit1;
	int digit2;
	int digit3;

	for (digit1 = 0; digit1 <= 7; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 8; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= 9; digit3++)
			{
				putchar('0' + digit1);
				putchar('0' + digit2);
				putchar('0' + digit3);

				if (!(digit1 == 7 && digit2 == 8 && digit3 == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	/* Print a newline character to move to the next line */
	putchar('\n');
	return (0);
}