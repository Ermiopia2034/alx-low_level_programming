#include "main.h"
/**
 * _islower - checks if a letter is lowercase or not
 * Return; return (0); success.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
