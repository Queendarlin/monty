#include "monty.h"

/**
 * faqu_push_queue -This function is for pushing an element to the queue.
 * @faqu_value: The value to add to list node
 * @faqu_actual_head: For the head address
 */

void faqu_push_queue(stack_t **faqu_actual_head, unsigned int faqu_value)
{
	stack_t *faqu_new_node;
	stack_t *faqu_last;

	faqu_new_node = malloc(sizeof(stack_t));
	if (faqu_new_node == NULL)
		faqu_error_handler(4, NULL, faqu_value);
	faqu_last = *faqu_actual_head;
	faqu_new_node->n = faqu_value;
	faqu_new_node->next = NULL;
	if (*faqu_actual_head == NULL)
	{
		faqu_head = faqu_new_node;
		faqu_new_node->prev = NULL;
		return;
	}
	while (faqu_last->next != NULL)
	{
		faqu_last = faqu_last->next;
	}
	faqu_last->next = faqu_new_node;
	faqu_new_node->prev = faqu_last;
}
