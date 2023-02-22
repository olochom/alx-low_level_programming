#include "main.h"
/**
* _isalpha - shows 1 if the input is a
*leeter Another cases, shows 0
*@c: The character will be checked
*Return: 1 for alphabetics or 0 for else
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
