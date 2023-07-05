#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: The string to print
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	/* Function implementation */
	if (*s)
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
		_putchar('\n');
}
