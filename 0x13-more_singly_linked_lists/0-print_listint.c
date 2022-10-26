#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a list_t list
 * @h: Heady of the list
 * Return: Number of nodes in the list
 *@n: node
 */

size_t print_listint(const listint_t *h)
{

	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);

}
