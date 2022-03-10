#include <stdio.h>

/**
 * main - displays sizes of various data types
 * Return: Returns zero
*/
int main(void)
{
unsigned long int charSize = sizeof(char);
unsigned long int intSize = sizeof(int);
unsigned long int longIntSize = sizeof(long int);
unsigned long int longLongIntSize = sizeof(long long int);
unsigned long int floatSize = sizeof(float);

printf("Size of a char: %lu byte(s)\n", charSize);
printf("Size of an int: %lu byte(s)\n", intSize);
printf("Size of a long int: %lu byte(s)\n", longIntSize);
printf("Size of a long long int: %lu byte(s)\n", longLongIntSize);
printf("Size of a float: %lu byte(s)\n", floatSize);

return (0);
}
