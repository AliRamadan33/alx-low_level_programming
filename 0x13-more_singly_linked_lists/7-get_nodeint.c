#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to return, starting at 0.
 *
 * Return: A pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	current = head;
	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	if (i == index && current != NULL)
		return (current);
	else
		return (NULL);
}
