#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  * *str_concat -  concatenates two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: result
  */
char *str_concat(char *s1, char *s2)
{
	int i, size1, size2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = strlen(s1);
	size2 = strlen(s2);
	p = malloc(sizeof(char) * (size1 + size2 + 1));

	if (p == 0)
		return (0);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			p[i] = s1[i];
		else
			p[i] = s2[i - size1];
	}
	p[i] = '\0';
	return (p);
}
