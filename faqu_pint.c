#include "monty.h"

/**
 * faqu_pint - Function for printing the top value
 * @faqu_head: For head of the stack
 * @faqu_counter: For line number
 */
void faqu_pint(stack_t **faqu_head, unsigned int faqu_counter)
{
	if (*faqu_head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", faqu_counter);
		fclose(faqu_bus.fq_file);
		free(faqu_bus.fq_content);
		faqu_free_stack(*faqu_head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*faqu_head)->n);
}
