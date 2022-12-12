#include "main.h"

/**
 * main - main.
 * @argc: number of arguments
 * @argv: arguments has to be a file
 * Return: 0 sucess, -1 error.
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	FILE *file = fopen(argv[1], "r");
	stack_t *stack = NULL;
	char *line = NULL, *opcode;
	size_t line_size = 0;
	unsigned int line_number = 0;

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &line_size, file) != -1)
	{
		line_number++;
		opcode = strtok(line, " \n");
		if (opcode == NULL)
			continue;
		execute(&stack, opcode, line_number);
	}
	free(line);
	fclose(file);
	return (0);
}
