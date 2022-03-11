#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function prints the alphabet in lowercase except e and q
 * Return: Returns 0
 */
int main(void)
{
char alphabet[] = "abcdfghijklmnoprstuvwxyz";

for (int i = 0; i < 26; i++)
{
	putchar(alphabet[i]);
}
putchar('\n');
return (0);
}
