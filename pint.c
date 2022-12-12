#include "monty.h"

/**
 * pint - check the code .
 * @stack: stack
 * @line_number: unused in this fonction
 * Return: to main.
 */

void pint(stack_t **stack, unsigned int line_number)
{
    stack_t *tmp = NULL;

    if (*stack == NULL || stack == NULL)
    {
        fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }
    tmp = *stack;
    printf("%d\n", tmp->n);
}
