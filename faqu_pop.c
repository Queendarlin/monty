#include "monty.h"

/**
 * faqu_pop - For removing the top value
 * @faqu_head: For the head of the stack
 * @faqu_counter: For the line number
 */
void faqu_pop(stack_t **faqu_head, unsigned int faqu_counter)
{
	stack_t *faqu_h;

	if (*faqu_head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", faqu_counter);
		fclose(faqu_bus.fq_file);
		free(faqu_bus.fq_content);
		faqu_free_stack(*faqu_head);
		exit(EXIT_FAILURE);
	}

	faqu_h = *faqu_head;
	*faqu_head = faqu_h->next;
	free(faqu_h);
}
