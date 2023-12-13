#include "monty.h"

/**
 * faqu_pchar - For printing ASCII char for values at the top
 * @faqu_head: For the head of the stack
 * @faqu_counter: For the line number
 */
void faqu_pchar(stack_t **faqu_head, unsigned int faqu_counter)
{
	stack_t *faqu_h;

	faqu_h = *faqu_head;
	if (!faqu_h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", faqu_counter);
		fclose(faqu_bus.fq_file);
		free(faqu_bus.fq_content);
		faqu_free_stack(*faqu_head);
		exit(EXIT_FAILURE);
	}
	if (faqu_h->n > 127 || faqu_h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", faqu_counter);
		fclose(faqu_bus.fq_file);
		free(faqu_bus.fq_content);
		faqu_free_stack(*faqu_head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", faqu_h->n);
}
