#include "main.h"
#include <stdio.h>
/**
*main: prints out its own name
*@argc: arguments counter
*@argv: argument vector for ""
*Returns nothing
*/
int main (int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
