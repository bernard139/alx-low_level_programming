#include "main.h"

/**
 * main - print lowercase alphabets
 *
 * Return: Always (success)
 */
int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

	return(0);
}
