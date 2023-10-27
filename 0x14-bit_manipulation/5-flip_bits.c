#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip to get from n to m.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR_result = n ^ m;
	unsigned int count = 0;

	while (XOR_result > 0)
	{
		count += XOR_result & 1;
		XOR_result >>= 1;
	}

	return (count);
}
