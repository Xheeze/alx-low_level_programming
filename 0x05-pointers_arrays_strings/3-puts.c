#include "main.h"
#include "2-strlen.c"
/**
*_puts- prints string to stdout
*_putchar- function points to str
*@str: string variable
*/
void _puts(char *str)
{
	int i;
	for (i=0; *(str+1) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
