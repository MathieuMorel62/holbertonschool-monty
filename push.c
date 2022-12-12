#include "main.h"

/**
 * push - check the code .
 * @stack: stack
 * @line_number: line_number
 * Return:
 */

void push(stack_t **stack, unsigned int line_number)
{
	/* Récupération du nombre à ajouter à la pile */
	char *n_str = strtok(NULL, " \n");
	int n = atoi(n_str);
	stack_t *new_node = malloc(sizeof(stack_t));

	if (n_str == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
	free(new_node);
}
