#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * except q and e, followed by a new line
 * Return: 0
 */
int main(void)
{
	char _ch = 'a';

	while (_ch <= 'z')
	{
		if (_ch != 'e' && _ch != 'q')
		{
			putchar(_ch);
		}
		_ch++;
	}
	putchar('\n');
	return (0);
}
