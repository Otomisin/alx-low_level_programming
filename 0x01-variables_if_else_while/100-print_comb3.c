#include <stdio.h>
/**
 * main - program that prints all possible different combinations of 2 digits
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int d;
	int f;

	while (c <= 99)
	{
		d = (c / 10 + '0');
		f = (c % 10 + '0');

		if (d < f)
		{
			putchar(d);
			putchar(f);

			if (c != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
putchar('\n');
return (0);
}
