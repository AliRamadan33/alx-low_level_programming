#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if the deletion succeeded, or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int ii = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (ii < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		ii++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
