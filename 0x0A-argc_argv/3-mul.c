#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int i = argv[1];
	int j = argv[2];
	int product = i * j;

	print("%d\n", product);
	return (0);
}
