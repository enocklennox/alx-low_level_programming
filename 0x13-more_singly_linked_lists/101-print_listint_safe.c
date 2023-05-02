#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current_node = head, *previous_node;

	while (current_node != NULL)
	{
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		count++;

		previous_node = current_node;
		current_node = current_node->next;

		if (previous_node <= current_node)
			break;
	}

	if (current_node == NULL)
		return (count);

	printf("-> [%p] %d\n", (void *)current_node, current_node->n);
	count++;

	return (count);
}
