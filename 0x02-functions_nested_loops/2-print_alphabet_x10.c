#include "main.h"

/**
 * print_alphabet - print alphabet x10 lowercase
 *
 * Return: Always(success)
 */
void print_alphabet(void)
{
	char x;
	int i;

	for(i = 0; i < 10; i++)
	{
		for(x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
	}

	_putchar('\n');
}
