#include <stdio.h>

/**
 * _strpbrk - Locates the first occurrence of any byte from accept in s
 * @s: The string to be searched
 * @accept: The set of bytes to search for
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				ptr = s;
				return ptr;
			}
		}
		s++;
	}

	return NULL;
}

