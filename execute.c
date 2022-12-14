#include "monty.h"

/**
 * parse_command - search for the operation code
 * @stack: pointer to the head of the stack
 * @op: the line with commands and instructions
 * @line_number: number of the line
 */

void parse_command(stack_t **stack, char *op, unsigned int line_number)
{
	int i;
	instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", divi},
		{"mul", mul},
		{"mod", mod},
		{NULL, NULL}
	};

	for (i = 0; instructions[i].opcode; i++)
		if (strcmp(op, instructions[i].opcode) == 0)
		{
			instructions[i].f(stack, line_number);
			return;
		}

	if (strlen(op) != 0 && op[0] != '#')
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, op);
		exit(EXIT_FAILURE);
	}
}
