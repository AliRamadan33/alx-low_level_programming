#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
    	const listint_t *slow = head, *fast = head;
	while (slow != NULL && fast != NULL && fast->next != NULL)
    	{
        	printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

        	slow = slow->next;
        	fast = fast->next->next;
		
		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
           		 count++;
			 break;
        	}
    	}
	
	/* If the list contains no loop, print the remaining nodes */
	if (slow == NULL || fast == NULL)
	{
        while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
           	count++;
            	head = head->next;
        }
    	}
    	/* If the list contains a loop, print the nodes before the loop */
   	 else
    	{
		slow = head;
        while (slow != fast)
        {
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next;
        }
	printf("[%p] %d\n", (void *)slow, slow->n);
	count++;
    	}
	 
	 return (count);
}
