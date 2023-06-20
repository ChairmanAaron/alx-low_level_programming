#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Write a program with the printf function
 * Return: 0 (Successfuly Executed)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("printf(%d is negative\n", n);
	return (0);
}
