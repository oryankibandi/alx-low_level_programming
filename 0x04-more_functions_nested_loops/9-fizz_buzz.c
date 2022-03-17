#include <stdio.h>

/**
 * main - prints Fizz or Buzz depending on the number
 * Return: Success 0
*/
int main(void)
{
	int i;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s%s", fizz, buzz);
		}
		else if (i % 3 == 0)
		{
			printf("%s", fizz);
		}
		else if (i % 5 == 0)
		{
			printf("%s", buzz);
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}
	return (0);
}
