#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function prints the alphabet in reverse
 * Return: Returns 0
 */
int main(void)
{
char alphabet[] = "zyxwvutsrqponmlkjihgfedcba";
int i;
for (i = 0; i < 26; i++)
{
	putchar(alphabet[i]);
}
putchar('\n');
return (0);
}
