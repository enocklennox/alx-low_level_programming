#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n).
 * @head: pointer to the head of the list.
 *
 * Return: the head node's data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current_node;

	if (*head == NULL)
	return (0);

	current_node = *head;
	n = current_node->n;
	*head = (*head)->next;
	free(current_node);

	return (n);
}
