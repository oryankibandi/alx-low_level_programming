#include <stdio.h>

int main()
{
    long unsigned int charSize = sizeof(char);
    long unsigned int intSize = sizeof(int);
    long unsigned int longIntSize = sizeof(long int);
    long unsigned int longLongIntSize = sizeof(long long int);
    long unsigned int floatSize = sizeof(float);

    printf("Size of a char: %lu byte(s)\n", charSize);
    printf("Size of an int: %lu byte(s)\n", intSize);
    printf("Size of a long int: %lu byte(s)\n", longIntSize);
    printf("Size of a long long int: %lu byte(s)\n", longLongIntSize);
    printf("Size of a float: %lu byte(s)\n", floatSize);

    return 0;
}
