#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks if its a letter or not
 * @c: letter being tested
 * Return: Always 0
 */
int _isalpha(int c)
{
	int r = isalpha(c);

	if (c)
		return (1);
	else
		return (0);
}
