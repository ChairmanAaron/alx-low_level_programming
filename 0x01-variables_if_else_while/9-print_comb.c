#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Point of entry
 * Return: 0 (Successfuly Executed)
 */

int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
	putchar(a);

	if (a != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}

	putchar('\n');
	return (0);
}
