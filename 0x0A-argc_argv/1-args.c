#include <stdio.h>
#include "main.h"
/**
 * main - prints number of arguments passed
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", --argc);

	return (0);
}
