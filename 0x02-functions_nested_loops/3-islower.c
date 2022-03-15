
/**
 * _islower - checks if a character is lowercase
 * Return: 1 if lower,otheriwse 0
*/
int _islower(int c)
{
	if(c >= 65 && c<=90)
	{
		return (0);
	} else if (c >=97 && c<= 122)
	{
		return (1);
	} else
	{
		return (0);
	}
}
