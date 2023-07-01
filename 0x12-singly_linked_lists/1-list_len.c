#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of content in a linked list
 * @h: list_t pointer to print
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

