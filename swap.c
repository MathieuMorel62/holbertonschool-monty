#include "monty.h"

/**
 * swap - check the code .
 * @stack: stack
 * @line_number: unused in this fonction
 * Return: to main.
 */

void swap(stack_t **stack, unsigned int line_number)
{
    stack_t *top = NULL;
    stack_t *second = NULL;

    top = *stack;

    if (top == NULL || top->next == NULL)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    top->prev = second;
    second->prev = NULL;
    top->next = second->next;
    second->next = top;

    *stack = second;
}
