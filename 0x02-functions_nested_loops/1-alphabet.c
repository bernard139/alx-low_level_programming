#include "main.h"

/**
 * main - print lowercase alphabets
 *
 * Return: Always (success)
 */
void print_alphabet(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return(0);
}
