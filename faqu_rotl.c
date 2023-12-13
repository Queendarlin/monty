#include "monty.h"

/**
 * faqu_rotl - For rotating top 3 elements
 * @faqu_head: For the stack head
 * @faqu_counter: For counting the number of lines
 */
void faqu_rotl(stack_t **faqu_head,
		__attribute__((unused)) unsigned int faqu_counter)
{
	stack_t *faqu_tmp = *faqu_head, *faqu_aux;

	if (*faqu_head == NULL || (*faqu_head)->next == NULL)
	{
		return;
	}

	faqu_aux = (*faqu_head)->next;
	faqu_aux->prev = NULL;

	while (faqu_tmp->next != NULL)
	{
		faqu_tmp = faqu_tmp->next;
	}

	faqu_tmp->next = *faqu_head;
	(*faqu_head)->next = NULL;
	(*faqu_head)->prev = faqu_tmp;
	(*faqu_head) = faqu_aux;
}
