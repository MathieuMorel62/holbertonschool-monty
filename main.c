#include "monty.h"

/**
 * main - main.
 * @argc: number of arguments
 * @argv: arguments has to be a file
 * Return: 0 sucess, 1 failure.
 */

int main(int argc, char **argv)
{
	FILE *file;
	size_t size = 0;
	char *line = NULL, *token = NULL;
	unsigned int line_number = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &size, file) != -1)
	{
		line_number++;
		token = strtok(line, "\n\t ");
		if (token == NULL || strncmp(token, "#", 1) == 0)
			continue;
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, "\n\t ");
			push(token, &stack, line_number);
		}
		else
			execute(token, &stack, line_number);
	}
	free_all(stack, line, file);
	exit(EXIT_SUCCESS);
}
