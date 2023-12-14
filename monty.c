#include "monty.h"
stack_t *faqu_head = NULL;

/**
 * main - For program entry point
 * @faqu_argc: For counting arguments
 * @faqu_argv: For the arguments
 *
 * Return: 0
 */

int main(int faqu_argc, char **faqu_argv)
{
	FILE *faqu_file;

	if (faqu_argc != 2)
		faqu_error_handler(1, faqu_argv[1], faqu_argc);
	if (access(faqu_argv[1], R_OK) == -1)
		faqu_error_handler(2, faqu_argv[1], faqu_argc);
	faqu_file = fopen(faqu_argv[1], "r");
	if (faqu_file == NULL)
		faqu_error_handler(2, faqu_argv[1], faqu_argc);
	faqu_read_file(faqu_file);
	fclose(faqu_file);
	faqu_free_dlistint(faqu_head);
	return (0);
}
