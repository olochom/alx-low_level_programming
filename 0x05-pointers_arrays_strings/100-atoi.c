#include <limits.h>
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int digit;

	while (*s != '\0')
	{
	if (*s == '-')
	{
	sign = -1;
	s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	if (*s >= '0' && *s <= '9')
	{
	digit = *s - '0';

	if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10))
	{
	return ((sign == 1) ? INT_MAX : INT_MIN);
	}

	num = num * 10 + digit;
	s++;
	}
	else
	{
		return (num * sign);
	}
	}
	return (0);
}
