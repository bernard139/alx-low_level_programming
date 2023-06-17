#include<stdio.h>

/**
 * main - print lowercse alphabets excluding q and e
 *
 * Result - Always (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return(0);
}
