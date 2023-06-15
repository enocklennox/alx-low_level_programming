#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index index of a dlistint_t linked list.
 * @head: head of the list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	dlistint_t *previous_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

		while (current_node != NULL && i < index)
	{
		previous_node = current_node;
		current_node = current_node->next;
		i++;
	}

	if (current_node == NULL)
		return (-1);

	previous_node->next = current_node->next;

	if (current_node->next != NULL)
		current_node->next->prev = previous_node;

	free(current_node);

	return (1);
}
