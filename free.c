#include "monty.h"

/**
 * free_stack - free a memory stack
 * @head: head of a stack
 */

void free_stack(stack_t *head)
{
	stack_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
