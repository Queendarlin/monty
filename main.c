#include "monty.h"
faqu_bus_t faqu_bus = {NULL, NULL, NULL, 0};

/**
* main - Monty code interpreter entry point 
* @faqu_argc: For the number of arguments
* @faqu_argv: For the monty files argument
* Return: 0 when successful 
*/
int main(int faqu_argc, char *faqu_argv[])
{
    char *faqu_content;
    FILE *faqu_file;
    size_t faqu_size = 0;
    ssize_t faqu_read_line = 1;
    stack_t *faqu_stack = NULL;
    unsigned int faqu_counter = 0;

    if (faqu_argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    faqu_file = fopen(faqu_argv[1], "r");
    faqu_bus.fq_file = faqu_file;
    if (!faqu_file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", faqu_argv[1]);
        exit(EXIT_FAILURE);
    }
    while (faqu_read_line > 0)
    {
        faqu_content = NULL;
        faqu_read_line = getline(&faqu_content, &faqu_size, faqu_file);
        faqu_bus.fq_content = faqu_content;
        faqu_counter++;
        if (faqu_read_line > 0)
        {
            faqu_execute(faqu_content, &faqu_stack, faqu_counter, faqu_file);
        }
        free(faqu_content);
    }
    faqu_free_stack(faqu_stack);
    fclose(faqu_file);
    return (0);
}
