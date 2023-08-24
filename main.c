#include "monty.h"
/**
 * main - entry to program
 * @argc: argument count
 * @argv: command line argumnents
 *
 * Return: 0 on (success)
 */
int main(int argc, char **argv)
{
	char *pathname = argv[1];

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	read_file(pathname);

	return (0);
}
