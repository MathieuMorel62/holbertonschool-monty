#include "monty.h"

/**
 * execute - execute fonctions.
 * @stack: the list
 * @line: line read
 * @line_number: number of the lines
 * Return: the pointer to the appropriate function
 */

int execute(char *line, stack_t **stack, unsigned int line_number)
{
	instruction_t instructions[] = {
	{"pall", pall},
	{"pop", pop},
	{"pint", pint},
	{"swap", swap},
	{"add", add},
	{"#", nop},
	{NULL, NULL}
	};

	int index = 0;

	while (instructions[index].opcode)
	{
		if (strcmp(line, instructions[index].opcode) == 0)
		{
			instructions[index].f(stack, line_number);
			return (EXIT_SUCCESS);
		}
		index++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, line);
	exit(EXIT_FAILURE);
}
