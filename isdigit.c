#include "monty.h"

/**
 * _isdigit - checks if is a digit numbers
 * @c: value
 *
 * Return: 0 is true or 1 is false
 */

int _isdigit(char*c)
{
	char *tmp = c;

	if (c == NULL)
		return (0);

	if (*tmp == '-')
		tmp++;

	for (; *tmp != '\0'; tmp++)
	{
		if ((*tmp < '0' || *tmp > '9'))
		{
			return (0);
		}
	}
	return (1);
}
