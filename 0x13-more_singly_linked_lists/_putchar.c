#include <unistd.h>
#include "lists.h"

/**
 *_putchar -writes the characterr c to stdout
 *@c: The character to print
 *Return: On success 1
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}
