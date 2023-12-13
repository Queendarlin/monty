#include "monty.h"

/**
 * faqu_pstr - For printing string from the top of the stack down
 * @faqu_head: For the head of the stack
 * @faqu_counter: For the line number
 */
void faqu_pstr(stack_t **faqu_head, unsigned int faqu_counter)
{
	stack_t *faqu_h;
	(void)faqu_counter;

	faqu_h = *faqu_head;
	while (faqu_h)
	{
		if (faqu_h->n > 127 || faqu_h->n <= 0)
		{
			break;
		}
		printf("%c", faqu_h->n);
		faqu_h = faqu_h->next;
	}
	printf("\n");
}
