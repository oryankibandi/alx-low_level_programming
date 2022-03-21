#include "main.h"

/**
 * stringlen - returns length of a string
 * @s: Pointer to string
 * Return: length
*/
int stringlen(char *s)
{
        int i;
        int length = 0;

        for (i = 0; s[i] != '\0'; i++)
        {
                length++;
        }
        return (length);
}

/**
 * print_rev - prints a string in reverse
 * @s: pointer to tring to print
 * Return: void
*/
void rev_string(char *s)
{
        int length = stringlen(s);
	char *subChar = "";
        int i, j;

        for (i = length; i >= 0; i--)
        {
                subChar[length - i] = s[i];
        }

	for ( j = 0; j <= length; j++)
	{
		s[j] = subChar[j];
	}
}
