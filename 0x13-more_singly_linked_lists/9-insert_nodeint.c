#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of the list.
 * @idx: index of the list where the new node
 *should be added. Index starts at 0.
 * @n: value of the new node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current_node, *new_node;

	if (head == NULL)
	return (NULL);

	if (idx == 0)
	return (add_nodeint(head, n));

	current_node = *head;
	for (i = 0; current_node != NULL && i < idx - 1; i++)
	current_node = current_node->next;

	if (i != idx - 1)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
