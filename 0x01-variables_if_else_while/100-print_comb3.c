#include <stdio.h>
/**
 * main -  a program that prints all possible combinations
 * Return: 0 (success)
 */
int main(void)
{
	 int i, j, k;

	for (i = 0; i < 8; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
	k = i * 10 + j;
	putchar('0' + k / 10);
	putchar('0' + k % 10);
	if (i < 8)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
