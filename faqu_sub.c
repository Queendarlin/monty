#include "monty.h"

/**
 * faqu_sub - Function for subtracting second from first element
 * @faqu_head: for the stack head
 * @faqu_counter: For counting the number of lines
 */
void faqu_sub(stack_t **faqu_head, unsigned int faqu_counter)
{
	stack_t *faqu_aux;
	int faqu_result, faqu_nodes;

	faqu_aux = *faqu_head;
	for (faqu_nodes = 0; faqu_aux != NULL; faqu_nodes++)
		faqu_aux = faqu_aux->next;

	if (faqu_nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", faqu_counter);
		fclose(faqu_bus.fq_file);
		free(faqu_bus.fq_content);
		faqu_free_stack(*faqu_head);
		exit(EXIT_FAILURE);
	}

	faqu_aux = *faqu_head;
	faqu_result = faqu_aux->next->n - faqu_aux->n;
	faqu_aux->next->n = faqu_result;
	*faqu_head = faqu_aux->next;
	free(faqu_aux);
}
