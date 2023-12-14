#include "monty.h"

/**
 * faqu_pop_stack - For deleting the node at the top of the stack.
 * @faqu_actual_head: For head address
 * @faqu_line_num: For command line number
 */

void faqu_pop_stack(stack_t **faqu_actual_head, unsigned int faqu_line_num)
{
	stack_t *faqu_temp, *faqu_erase;

	faqu_temp = *faqu_actual_head;
	if (faqu_temp == NULL)
		faqu_error_handler(7, NULL, faqu_line_num);
	faqu_erase = *faqu_actual_head;
	*faqu_actual_head = faqu_temp->next;
	faqu_temp = faqu_temp->next;
	if (faqu_temp != NULL)
		faqu_temp->prev = NULL;
	free(faqu_erase);
}
