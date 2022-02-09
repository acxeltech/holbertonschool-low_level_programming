#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Numbers must be separated by ,
 * followed by a space
 * Return: 0
 */

int main(void)
{
	int num;
	int  x;

	for (num = 48; num <= 56; num++)
	{
		for (x = 49; x <= 57; x++)
		{
			if (x > num)
			{
				putchar(num);
				putchar(x);
				if (x != 56 || x != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
