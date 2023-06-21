#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if a letter is lowercase or not
 * @c: letter being tested
 * Return: Always 0
 */
int _islower(int c)
{
	int r = islower(c);
	if (r)
		return (1);
	else
		return (0);
}
