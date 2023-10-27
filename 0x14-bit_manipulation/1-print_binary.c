#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: The input into the function
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit;
	int print_out = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		bit = n & 1;
		n = n >> 1;

		if (bit == 1 || print_out)
		{
			_putchar(bit + '0');
			print_out = 1;
		}
	}
}
