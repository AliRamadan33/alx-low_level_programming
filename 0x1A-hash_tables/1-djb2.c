#include "hash_tables.h"

/**
 * hash_djb2 - perform djb2 hash on string input
 * @str: input string to hash
 *
 * Return: hash as unsigned long int
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int Hash;
	int C;

	Hash = 5381;
	while ((C = *str++))
	{
		Hash = ((Hash << 5) + Hash) + C; /* Hash * 33 + C */
	}
	return (Hash);
}
