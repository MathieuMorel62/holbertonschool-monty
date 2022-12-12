#include "monty.h"

/**
 * execute - execute fonctions.
 * @stack: stack
 * @op: opcode
 * @line_number: count of lines
 * Return: the pointer to the appropriate function
 */

void execute(char *op, stack_t **stack, unsigned int line_number)
{
		instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{"pop", pop},
		{"pint", pint},
		{"swap", swap},
		{NULL, NULL}
		};

		int index = 0;

		while (instructions[index].opcode != NULL)
		{
			if (strcmp(instructions[index].opcode, op) == 0)
			{
				instructions[index].f(stack, line_number);
				return;
			}
			index++;
		}
		printf("L%d: unknown instruction %s\n", line_number, op);
		exit(EXIT_FAILURE);
}
