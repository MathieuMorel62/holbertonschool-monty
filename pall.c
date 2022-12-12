#include "monty.h"

/**
 * pall - check the code .
 * @stack: stack
 * @line_number: unused in this fonction
 * Return: to main.
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;
	(void)line_number;
	tmp = *stack;

	if ((*stack) == NULL)
		return;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
