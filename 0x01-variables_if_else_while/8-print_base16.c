#include <stdio.h>
/**
 * main - prints all hex numbers in lowercase
 * Objectives: Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 * Return: returns 0 if successful
 */
int main(void)
{
	int a;
	char ch;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}