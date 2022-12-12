#include "monty.h"

/**
 * pall - check the code .
 * @stack: stack
 * @line_number: unused in this fonction
 * Return: to main.
 */

void pall(stack_t **stack, unsigned int line_number)
{
    (void)line_number;
    stack_t *node = *stack;

    if ((*stack) == NULL)
        return;

    while (node != NULL)
    {
        printf("%d\n", node->n);
        node = node->next;
    }
}
