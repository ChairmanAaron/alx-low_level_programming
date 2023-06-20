#include<stdio.h>
#include<time.h>

/**
 * main - Write a program that prints the alphabet in lowercase
 * Return: 0 (Successfuly Executed)
 */

int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
	if (low != e && low != q)
	putchar(low);
	}

	putchar('\n');
	return (0);
}
