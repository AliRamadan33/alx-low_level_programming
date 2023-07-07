i#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: pointer to hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array = NULL;
	hash_node_t *seeker = NULL;
	size_t print_comma_flag = 0;
	size_t j = 0;

	/* check if ht is NULL return */
	if (!ht)
		return;

	array = ht->array;

	printf("{");
	/* loop through indices of array for non-NULL */
	while (j < ht->size)
	{
		if (array[j])
		{
			/* valid pointer found */
			print_comma_flag = 1;
			seeker = array[j];
			while (seeker)
			{
				printf("'%s': ", seeker->key);
				printf("'%s'", seeker->value);
				if (seeker->next)
					printf(", ");
				seeker = seeker->next;
			}
		}
		if (array[j + 1] && print_comma_flag)
			printf(", ");
		j++;
	}
	printf("}\n");
}
