/**
 * main - Point of entry
 * Return: 0 (Successfuly Executed)
 */

int main(void)

{
	int a, m;

	for (a = '0'; a < '9'; a++)
	{
	for (m = a + 1; m <= '9'; m++)
	{
	if (a != m)
	{
	putchar (a);
	putchar (m);
	if (a == '8' && m == '9');
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
