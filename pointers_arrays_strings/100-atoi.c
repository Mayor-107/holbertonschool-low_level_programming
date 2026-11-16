#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the converted integer, or 0 if no numbers found
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int result;
	int found_digit;

	i = 0;
	sign = 1;
	result = 0;
	found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			result = result * 10 - (s[i] - '0');
		}
		else if (found_digit)
		{
			break;
		}
		i++;
	}

	if (!found_digit)
	{
		return (0);
	}

	if (sign > 0)
	{
		return (-result);
	}

	return (result);
}
