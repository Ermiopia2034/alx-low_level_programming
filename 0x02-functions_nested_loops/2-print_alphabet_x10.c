#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - will print the alphabet 10 times
 * return: return (0) always: success.
 */
void print_alphabet_x10(void)
{
	char alpha;

	for (int i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
			putchar('\n');
		}
	}
}
