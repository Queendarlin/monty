#include "monty.h"

/**
 * faqu_free_stack -Function for freeing the list
 * @faqu_head: For the head of the stack
 */
void faqu_free_stack(stack_t *faqu_head)
{
	stack_t *faqu_aux;

	faqu_aux = faqu_head;
	while (faqu_head)
	{
		faqu_aux = faqu_head->next;
		free(faqu_head);
		faqu_head = faqu_aux;
	}
}
