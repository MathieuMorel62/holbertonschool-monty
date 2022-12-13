#include "monty.h"

/**
 * push - add new node
 * @stack: pointer to the stack
 * @line_number: number of a line
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *node;
	char *num;
	int i;

	num = strtok(NULL, DELIMS);
	if (num == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	/*test*/
	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[i] == '-')
			i++;
		if (isdigit(num[i]) == 0)
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	node->n = atoi(num);
	node->prev = NULL;
	node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = node;

	*stack = node;
}
