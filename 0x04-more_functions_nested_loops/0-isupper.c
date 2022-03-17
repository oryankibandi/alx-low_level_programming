#include "main.h"

/**
 * _isupper - checks if c is uppercase.
 *@c: ASCII of character to be checked
 * Return: Uppercase 1, else 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
