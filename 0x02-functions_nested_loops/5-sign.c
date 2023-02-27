#include "main.h"
/**
* _isalpha - shows 1 if the input is a
*leeter Another cases, shows 0
*@c: The character will be checked
*Return: 0 success
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
	{
	_putchar ('\n');
	}
	return (0);
}
}
