#include <unistd.h>
#include "main.h"
/**
 *_putchar - writes the chracter c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * on eror, -1 is returned, and errno is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
