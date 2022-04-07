#include <stdlib.h>
#include "main.h"

unsigned int get_length(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	return (k);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, ls2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		ls2 = strlen(s2);
	else
		ls2 = n;

	p = malloc(strlen(s1) + ls2 + 1);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		p[i] = s1[i];

	for (i = strlen(s1); i < strlen(s1) + ls2; i++)
		p[i] = *s2++;

	p[i] = '\0';

	return (p);
}
