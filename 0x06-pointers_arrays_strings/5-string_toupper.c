#include "main.h"

/**
 * string_toupper -  function converting chars to uppercase.
 *@n:var of char.
 * Return: n.
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
