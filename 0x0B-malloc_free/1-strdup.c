#include <stdlib.h>
#include "main.h"

/*
 * _strdup - create a pointer to a new string.
 * which is a duplicate of the string str.
 * memory for the new string is obtained with malloc.
 *
 * @str: a pointer to a string.
 *
 * Return: a pointer to the array, or NULL if it fails.
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
