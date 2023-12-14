#include "monty.h"

/**
 * faqu_add - For adding the top two elements of the stack.
 * @faqu_head: for the head of the stack
 * @faqu_counter: For the number of lines
 */
void faqu_add(stack_t **faqu_head, unsigned int faqu_counter)
{
	stack_t *faqu_h;
	int faqu_len = 0, faqu_aux;

	faqu_h = *faqu_head;
	while (faqu_h)
	{
		faqu_h = faqu_h->next;
		faqu_len++;
	}
	if (faqu_len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", faqu_counter);
		fclose(faqu_bus.fq_file);
		free(faqu_bus.fq_content);
		faqu_free_stack(*faqu_head);
		exit(EXIT_FAILURE);
	}
	faqu_h = *faqu_head;
	faqu_aux = faqu_h->n + faqu_h->next->n;
	faqu_h->next->n = faqu_aux;
	*faqu_head = faqu_h->next;
	free(faqu_h);
}
