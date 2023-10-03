#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	

	return (0);
}
