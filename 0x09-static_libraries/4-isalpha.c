#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Entry point
 * @c: character in
 * Return: 1 if c is a letter , 0 if not
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
