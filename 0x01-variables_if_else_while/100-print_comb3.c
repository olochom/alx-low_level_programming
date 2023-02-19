#include <stdio.h>
/**
 * main -  a program that prints all possible combinations
 * Return: 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = i; j < 10; j++)
	{
	printf("%d", i);
	printf("%d", j);
	if (i < 9 || j < 9)
	{
	printf(", ");
	}
	}
	}
	printf("\n");
	return (0);
}
