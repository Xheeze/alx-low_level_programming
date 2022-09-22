#include "main.h"

/**
 * _strlen - char string
 * @i: length varial\ble
 * @s: character to getstring
 * Return: returns length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
