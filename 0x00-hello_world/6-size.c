#include<stdio.h>
/**
 * main - Write a program with the printf function
 * Return: 0 (Successfuly Executed)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf(“Size of a char: %lu bytes(s)\n”, (unsigned long)sizeof(a));
printf(“Size of an int: %lu bytes(s)\n”, (unsigned long)sizeof(b));
printf(“Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf(“Size of a long long int: %lu byte(s)\n”, (unsigned long)sizeof(d));
printf(“Size of a float int: %lu byte(s)\n”, (unsigned long)sizeof(f));

return (0);
}
