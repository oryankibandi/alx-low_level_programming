
/**
 * print_to_98 - prints to 98
 * @n: starting number
 * Return: void
*/
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
			{
				printf(" ");
			}
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
			}
		}
	} else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != n)
			{
				printf(" ");
			}
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
			}
		}
	}
	else
	{
		printf("%d", 98);
	}
}
