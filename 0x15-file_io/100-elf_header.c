#include "main.h"

/**
 * main - displays the information contained
 * in the ELF header at the start of an ELF file.
 * @argc: argc
 * @argv: argv
 *
 * Return: 1 or 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	if (argc != 2)
	{
		dprintf(2, "Error");
		exit(98);
	}
	return (0);
}
