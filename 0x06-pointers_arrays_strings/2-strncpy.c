#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: copy destination
 * @src: string to be copied
 * @n: the maximum number of bytes copied from src
 *
 * Return: the pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
