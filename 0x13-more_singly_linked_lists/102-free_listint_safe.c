#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list.
 * @h: double pointer to the head of the list.
 *
 * Return: the size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current_node = *h, *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		count++;

		if (next_node >= current_node)
			break;

		current_node = next_node;
	}

	*h = NULL;
	return (count);
}
