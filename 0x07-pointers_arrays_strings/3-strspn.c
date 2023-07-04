/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Pointer to the string of accepted characters
 *
 * Return: Number of bytes in the initial segment of s consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int match;

	while (*s != '\0')
	{
		match = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				length++;
				match = 1;
				break;
			}
			accept++;
		}

		if (match == 0)
			break;

		s++;
		accept = accept - length;
	}

	return length;
}
