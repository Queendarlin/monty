#include "monty.h"

/**
 * faqu_push_stack - Function for pushing an element to the stack.
 * @faqu_value: Value of node
 * @faqu_actual_head: For head address
 */

void faqu_push_stack(stack_t **faqu_actual_head, unsigned int faqu_value)
{
	stack_t *faqu_new_node;
	stack_t *faqu_current = *faqu_actual_head;

	faqu_new_node = malloc(sizeof(stack_t));
	if (faqu_new_node == NULL)
		faqu_error_handler(4, NULL, faqu_value);
	faqu_new_node->n = faqu_value;
	faqu_new_node->next = *faqu_actual_head;
	faqu_new_node->prev = NULL;
	if (faqu_current != NULL)
		faqu_current->prev = faqu_new_node;
	faqu_head = faqu_new_node;
}
