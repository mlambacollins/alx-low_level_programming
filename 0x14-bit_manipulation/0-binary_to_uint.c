#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number into an unsigned integer
 * @b: The input string
 *
 * Return: Decimal number, 0 if string is empty or contains non-binary
 */
unsigned int binary_to_uint(const char *b)
{
	int binary = atoi(b);
	int dec = 0;
	int base = 1;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		b++;
	}

	while (binary != 0)
	{
		dec += (binary % 10) * base;
		binary /= 10;
		base *= 2;
	}
	return (dec);
}
