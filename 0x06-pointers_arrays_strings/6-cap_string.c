#include "main.h"

char *cap_string(char *s)
{
	int i;
	int next = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] == 32) || (s[i] == 44) || (s[i] == '\n') || (s[i] == '\t') || (s[i] == 59) || (s[i] == 46) || (s[i] == 33) || (s[i] == '?') || (s[i] == 34) || (s[i] == 40) || (s[i] == 40) || (s[i] == 123) || (s[i] == 125))
		{
			next = 1;
		}
		if (((s[i] >= 97) && (s[i] <= 122)) && next)
		{
			s[i] -= 32;
			next = 0;
		}
	}
	return (s);
}
