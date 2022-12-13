#include "monty.h"

/**
 * push - add a node .
 * @stack: list
 * @line_number: line of program
 * @token: the number to add in the node
 */

void push(char *token, stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	(void) line_number;
	int i;

	if (token == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	for (i = 0; token[i] != '\0'; i++)
	{
		if (token[i] == '-')
			i++;
		if (isdigit(token[i]) == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = atoi(token);
	new->prev = NULL;
	new->next = NULL;

	if (*stack)
	{
		(*stack)->prev = new;
		new->next = *stack;
	}
	*stack = new;
}
