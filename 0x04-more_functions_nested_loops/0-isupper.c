#include "main.h"

/**
 * _isupper - check if character is uppercase
 * @c: The character being checked
 * Return: 1 if character is uppercase, otherwise 0
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

