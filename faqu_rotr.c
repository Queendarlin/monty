#include "monty.h"

/**
 * faqu_rotr - For rotating the 3 bottom elements of the stack
 * @faqu_head: For the stack head
 * @faqu_counter: For counting the number of line
 */
void faqu_rotr(stack_t **faqu_head,
		__attribute__((unused)) unsigned int faqu_counter)
{
	stack_t *faqu_copy;

	faqu_copy = *faqu_head;
	if (*faqu_head == NULL || (*faqu_head)->next == NULL)
	{
		return;
	}

	while (faqu_copy->next)
	{
		faqu_copy = faqu_copy->next;
	}

	faqu_copy->next = *faqu_head;
	faqu_copy->prev->next = NULL;
	faqu_copy->prev = NULL;
	(*faqu_head)->prev = faqu_copy;
	(*faqu_head) = faqu_copy;
}
