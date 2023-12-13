#include "monty.h"

/**
 * faqu_pall - For printing all the content of the stack
 * @faqu_head: for the head of stack
 * @faqu_counter: Unused parameter
 */
void faqu_pall(stack_t **faqu_head, unsigned int faqu_counter)
{
	stack_t *faqu_h;
	(void)faqu_counter;

	faqu_h = *faqu_head;
	if (faqu_h == NULL)
		return;

	while (faqu_h)
	{
		printf("%d\n", faqu_h->n);
		faqu_h = faqu_h->next;
	}
}
