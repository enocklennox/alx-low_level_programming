#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to head of list
 *
 * Return: number of elements in list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
	current = current->next;
	count++;
	}

	return (count);
}
