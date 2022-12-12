#include "monty.h"

/**
 * main - main.
 * @argc: number of arguments
 * @argv: arguments has to be a file
 * Return: 0 sucess, 1 failure.
 */

int main(int argc, char *argv[])
{
    FILE *file;
    ssize_t bytes_read;
    size_t len = 0;
    char *line = NULL;
    char *token = NULL;
    int line_number = 0;
    stack_t *head = NULL;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: monty file\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        file = fopen(argv[1], "r");

        if (file == NULL)
        {
            fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
            exit(EXIT_FAILURE);
        }
        else
        {
            while ((bytes_read = getline(&line, &len, file)) != -1)
            {
                line_number++;
                token = get_tokens(line, line_number);
                if (token != NULL)
                    execute(token, &head, line_number);
            }
            free(line);
            free_stack(head);
            fclose(file);
        }
    }
    return (0);
}
