#include "monty.h"

/**
 * faqu_free_dlistint - Function for freeing double linked list
 * @faqu_head: For head address
 */

void faqu_free_dlistint(stack_t *faqu_head)
{
	if (faqu_head != NULL)
	{
		if (faqu_head->next != NULL)
			faqu_free_dlistint(faqu_head->next);
		free(faqu_head);
	}
}
