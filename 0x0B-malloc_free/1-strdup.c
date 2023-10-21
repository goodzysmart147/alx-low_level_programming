#include <stdlib.h>

/*
 * _strdup - duplicate a steing into newly allocated array.
 *
 * @str: string to duplicate.
 *
 * Return: pointer to new string.
 */
char *_strdup(char *str)
{
	char *ptr, *ret;
	int size = 0;

	if (!str)
	{
		return (NULL);
	}

	ptr = str;
	while (*ptr++)
		size++;

	ret = malloc(size + 1);
	if (!ret)
	{
		return (NULL);
	}

	ptr = ret;
	while (*str)
		*ptr++ = *str++;

	*ptr = 0;
	return (ret);
}
