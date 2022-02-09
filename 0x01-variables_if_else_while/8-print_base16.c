#include <stdio.h>

/**
 * main - program that prints all the numbers
 * of base 16 in lowercase
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	int num;
	char chr;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (chr = 'a'; chr <= 'f'; chr++)
	{
		putchar(chr);
	}
	putchar('\n');
return (0);
}
