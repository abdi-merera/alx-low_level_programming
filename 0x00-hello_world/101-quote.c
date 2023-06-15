#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints a specific message to the standard error.
 * The program returns a FAILURE value.
 *
 * Return: 1 (FAILURE)
 */
int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, 59);
	return 1;
}
