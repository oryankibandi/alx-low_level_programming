#include "main.h"

char *string_toupper(char *)
{
	int i = 0;
    int j;
    while (s[i] != '\0')
    {
        i++;
    }

    for (j = 0; j < i; j++)
    {
        if((s[j] <= 122) && (s[j] >= 97))
        {
            s[j] -= 32;
        }
    }
    return (s);
}
