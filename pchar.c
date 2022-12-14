#include "monty.h"

/**
 * pchar - prints the char at the top of the stack
 * @stack: pointer to the head of the stack
 * @line_number: number of the line
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	int number;

	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	number = (*stack)->n;

	if (!isascii(number))
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", number);
}
