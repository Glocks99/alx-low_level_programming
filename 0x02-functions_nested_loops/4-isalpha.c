#include "main.h"

/**
 * _islower -> checks if the character is lower case
 * @c: character to be checked
 * Return: returns 1 and 0 depending on the condition
 */
int _islower(int c)
{
	int lower = (c >= 'a' && c <= 'z');
	int upper = (c >= 'A' && c <= 'Z');

	if (lower || upper)
		return (1);
	else
		return (0);
}

