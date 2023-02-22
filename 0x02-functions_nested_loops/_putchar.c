#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c:the character to print
* Return: 0  success
* On error, 1 returned, and err no is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
