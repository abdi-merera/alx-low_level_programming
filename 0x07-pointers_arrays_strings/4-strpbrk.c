/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing the bytes to search for
 *
 * Return: Pointer to the first occurrence of a matching byte in s, or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (_strchr(accept, *s) != NULL)
			return s;
		s++;
	}

	return NULL;
}

