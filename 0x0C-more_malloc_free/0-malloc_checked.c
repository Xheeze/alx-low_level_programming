#include <stdlib.h>
#include "main.h"

/*
* string_nconcat - concatanates 
* @s1: string1
* @s2: string2
* @n: bytes setter
*  
* return NULL on failure.
* If n >= len s2, use s2
* returns pointer string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i = n, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (size = 0; s1[size]; size++)
		i++;

	concat = malloc(sizeof(char) * (i + 1));

	if (concat == NULL)
		return (NULL);

	i = 0;

	for (size = 0; s1[size]; size++)
		concat[i++] = s1[size];

	for (size = 0; s2[size] && size < n; size++)
		concat[i++] = s2[size];

	concat[i] = '\0';

	return (concat);
}
