#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * _atoi -> converts a string to an integer
 * @str: pointer to string to be converted
 * Return: converted string
 */
int _atoi(char *str)
{
	int sign = 1;
	int base = 0;
	int i = 0;

	while (str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i++] == '-');
	while (str[i] >= '0' && str[i] <= '9')
	{
	if (base > INT_MAX / 10 || (base == INT_MAX / 10
					&& str[i] - '0' > 7))
	if (sign == 1)
		return (INT_MAX);
	else
		return (INT_MIN);
	}
	}
}
