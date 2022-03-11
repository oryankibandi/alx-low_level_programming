#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function prints the alphabet
 * Return: Returns 0
 */
int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
char upperAlphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (int i = 0; i < 26; i++)
{
	putchar(alphabet[i]);
}
for (int i = 0; i < 26; i++)
{
	putchar(upperAlphabet[i]);
}
putchar('\n');
return (0);
}
