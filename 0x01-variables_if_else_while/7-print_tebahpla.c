#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Point of entry
 * Return: 0 (Successfuly Executed)
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
