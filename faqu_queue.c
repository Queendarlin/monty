#include "monty.h"

/**
 * faqu_queue - For printing stack in queue format
 * @faqu_head: For the  stack head
 * @faqu_counter: For number of lines
 */
void faqu_queue(stack_t **faqu_head, unsigned int faqu_counter)
{
	(void)faqu_head;
	(void)faqu_counter;
	faqu_bus.fq_lifi = 1;
}

/**
 * faqu_addqueue - For adding node to the tail
 * @faqu_n: For the new value
 * @faqu_head: For the head of the stack
 */
void faqu_addqueue(stack_t **faqu_head, int faqu_n)
{
	stack_t *faqu_new_node, *faqu_aux;

	faqu_aux = *faqu_head;
	faqu_new_node = malloc(sizeof(stack_t));
	if (faqu_new_node == NULL)
	{
		printf("Error\n");
	}
	faqu_new_node->n = faqu_n;
	faqu_new_node->next = NULL;
	if (faqu_aux)
	{
		while (faqu_aux->next)
			faqu_aux = faqu_aux->next;
	}
	if (!faqu_aux)
	{
		*faqu_head = faqu_new_node;
		faqu_new_node->prev = NULL;
	}
	else
	{
		faqu_aux->next = faqu_new_node;
		faqu_new_node->prev = faqu_aux;
	}
}

