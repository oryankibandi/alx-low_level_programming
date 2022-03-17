#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: void
*/
void more_numbers(void)
{
	int i, j, k;
	int nums[] = {0, 0};

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
			{
				_putchar(j + '0');
			} else
			{
				nums[0] = j / 10;
				nums[1] = j % 10;

				for (k = 0; k < 2; k++)
				{
					_putchar(nums[k] + '0');
				}
			}
		}
		_putchar('\n');
	}
}
