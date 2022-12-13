#include "monty.h"

stack_t **global_head;

/**
 * main - main of the project
 * @argc: numbers of  arguments
 * @argv: arguments has to be a file
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	stack_t *head;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	head = NULL;
	global_head = &head;

	read_file(argv[1], &head);

	atexit(global_free);
	exit(EXIT_SUCCESS);
}
