#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 *at index index of a listint_t linked list.
 * @head: pointer to the head of the list.
 * @index: index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node, *previous_node;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(current_node);
	return (1);
	}

	current_node = *head;
	for (i = 0; current_node != NULL && i < index; i++)
	{
		previous_node = current_node;
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (-1);

	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}
