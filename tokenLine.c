#include "monty.h"

/**
 * get_tokens - get tokens from the line
 * @line: line from file
 * @line_number: line number
 *
 * Return: int
 */

char *get_tokens(char *line, unsigned int line_number)
{
	char delimiter[2] = "\n ";
	char *token = NULL;
	char *holder = NULL;

	token = strtok(line, delimiter);
	if (token == NULL)
		return (NULL);

	holder = strtok(NULL, delimiter);
	if (holder != NULL)
	{
		if (holder)
			global_var = atoi(holder);
		else
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	else if (holder == NULL && strcmp(token, "push") == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	return (token);
}
