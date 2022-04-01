#include <stdio.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 */

int main(int argc, char *argv)
{
	int i;
	int sum = 0;
	unsigned long sze;

	if (argc <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		sze = sizeof(argv[i]);
		if (isdigit(argv[i]) != 0)
		{
			printf("Error\n");
			return (1);
		}

		if (argv[i] >= 0)
		{
			sum += argv[i];
		}
	}
	printf("%d\n", sum);

	return(sum);
}
