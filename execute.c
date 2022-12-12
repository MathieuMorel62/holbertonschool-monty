#include "main.h"
/**
 * execute - execute fonctions.
 * @stack: stack
 * @opcode: opcode
 * @line_number: count of lines
 * Return: f
 */
void execute(stack_t **stack, char *opcode, unsigned int line_number)
{
	unsigned int i = 0;
	instruction_t instructions[] = {
	{"push", push},
	{"pall", pall},
	{"pop", pop},
	{"pint", pint},
	{"swap", swap},
	{NULL, NULL}
	};

	while (instructions[i].opcode != NULL)
	{
		if (strcmp(instructions[i].opcode, opcode) == 0)
		{
			instructions[i].f(stack, line_number);
			break;
		}
		i++;
	}
	if (instructions[i].opcode == NULL)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
	}
}
