#include <stdlib.h>
#include <stdio.h>

/**
* main - This function prints the alphabet
* Return: Returns 0
*/
int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

for (int i = 0; i < 26; i++)
{
	putchar(alphabet[i]);
}
putchar('\n');
return (0);
}
