#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the head of the list.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL, *current_node = *head, *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		current_node->next = previous_node;
		previous_node = current_node;
		current_node = next_node;
	}

	*head = previous_node;

	return (*head);
}
