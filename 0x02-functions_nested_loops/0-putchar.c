#include "_putchar.c"

/**
 * main - Displays a character with _putchar.c's function
 * Return: 0
*/
int main(void)
{
char word[] = "_putchar";
int i;
for (i = 0; i < sizeof(word) ; i++)
{
	_putchar(word[i]);
}

return (0);
}
