#include <main.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int ln, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (ln = 0; b[ln] != '\0'; ln++)
		;

	for (ln--, base_two = 1; ln >= 0; ln--, base_two *= 2)
	{
		if (b[ln] != '0' && b[ln] != '1')
		{
			return (0);
		}

		if (b[ln] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
