#include "main.h"
/**
 * _puts_recursion - Print a string
 * @s: The string to print
 * Return: Nothin
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar('\n');
		return;
	}
		_putchar(*s);
		_puts_recursion(s + 1);
}
