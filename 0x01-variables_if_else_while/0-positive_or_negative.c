#include <stdio.h>
#include <time.h>

/**
 * main - This function assigns a random number to variable n
 * Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("is positive");
}
else if (n < 0)
{
	printf("is negative");
} else
{
	printf("is zero");
}

return (0);
}
