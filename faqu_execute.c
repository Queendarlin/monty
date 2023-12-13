#include "monty.h"

/**
 * faqu_execute - Function for executing opcode
 * @faqu_content: For line content
 * @faqu_stack: For the head linked list - stack
 * @faqu_counter: For the line counter
 * @faqu_file: Monty File pointer
 * Return: 0 or 1
 */
int faqu_execute(char *faqu_content, stack_t **faqu_stack,
		unsigned int faqu_counter, FILE *faqu_file)
{
	instruction_t faqu_opst[] = {
		{"push", faqu_push}, {"pall", faqu_pall}, {"pint", faqu_pint},
		{"pop", faqu_pop},
		{"swap", faqu_swap},
		{"add", faqu_add},
		{"nop", faqu_nop},
		{"sub", faqu_sub},
		{"div", faqu_div},
		{"mul", faqu_mul},
		{"mod", faqu_mod},
		{"pchar", faqu_pchar},
		{"pstr", faqu_pstr},
		{"rotl", faqu_rotl},
		{"rotr", faqu_rotr},
		{"queue", faqu_queue},
		{"stack", faqu_stack},
		{NULL, NULL}
	};
	unsigned int faqu_i = 0;
	char *faqu_op;

	faqu_op = strtok(faqu_content, " \n\t");
	if (faqu_op && faqu_op[0] == '#')
		return (0);
	faqu_bus.fq_arg = strtok(NULL, " \n\t");
	while (faqu_opst[faqu_i].opcode && faqu_op)
	{
		if (strcmp(faqu_op, faqu_opst[faqu_i].opcode) == 0)
		{
			faqu_opst[faqu_i].f(faqu_stack, faqu_counter);
			return (0);
		}
		faqu_ i++;
	}
	if (faqu_op && faqu_opst[faqu_i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", faqu_counter, faqu_op);
		fclose(faqu_file);
		free(faqu_content);
		faqu_free_stack(*faqu_stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
