#include <stdio.h>
/**
* main - a program that prints all possible combinations
*
* Return: 0 (success)
*/
int main(void)
{
	for (int i = 0; i < 100; i++)
	{
	for (int j = i; j < 100; j++)
	{
	if (i != j)
	{
	putchar('0' + i / 10);
	putchar('0' + i % 10);
	putchar(' ');
	putchar('0' + j / 10);
	putchar('0' + j % 10);
	if (i < 99 || j < 98)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	return (0);
}

