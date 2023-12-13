#include "monty.h"

/**
 * faqu_swap - Function for swapping the first two elements
 * @faqu_head: For the stack head
 * @faqu_counter: For the line number
 */
void faqu_swap(stack_t **faqu_head, unsigned int faqu_counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", faqu_counter);
		fclose(faqu_bus.fq_file);
		free(faqu_bus.fq_content);
		faqu_free_stack(*faqu_head);
		exit(EXIT_FAILURE);
	}
	faqu_h = *faqu_head;
	faqu_aux = faqu_h->n;
	faqu_h->n = faqu_h->next->n;
	faqu_h->next->n = faqu_aux;
}
