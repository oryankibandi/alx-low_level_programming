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
	char *s3;
	int i, j;
	unsigned int l_s1, l_s2;
	unsigned int tot_len;

	l_s1 = get_length(s1);
	l_s2 = get_length(s2);

	if (n >= l_s2)
	{
		n = l_s2;
	}

	tot_len = l_s1 + n;

	s3 = malloc(sizeof(s3) * tot_len);

	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}

	for (i = 0; i < l_s1; i++)
	{
		s3[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		s3[i + l_s1] = s2[j];
	}

	return (s3);
}
