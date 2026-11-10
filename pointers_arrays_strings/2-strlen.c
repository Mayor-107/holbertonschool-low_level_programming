/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the string.
 *
 * Return: The number of characters in the string.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
