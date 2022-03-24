#include "main.h"

/**
 * rot13 - letter substitution cipher
 * @s: string
 * Return: s
*/
char *rot13(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 97 && s[i] <= 122) && ((s[i] + 13) > 122))
		{
			j = s[i] + 13;
			j = j - 122;

			s[i] = j + 96;
		} else if ((s[i] >= 97 && s[i] <= 122) && ((s[i] + 13) <= 122))
		{
			s[i] += 13;
		} else if ((s[i] >= 65 && s[i] <= 90) && ((s[i] + 13) > 90))
		{
			j = s[i] + 13;
			j = j - 90;
			s[i] = j + 64;
		} else if ((s[i] >= 65 && s[i] <= 90) && ((s[i] + 13) <= 90))
		{
			s[i] += 13;
		} else
		{
			continue;
		}
	}
	return (s);
}
