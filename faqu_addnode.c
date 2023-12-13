#include "monty.h"

/**
 * faqu_addnode - For adding node to the head of the stack
 * @faqu_head: for the head of the stack
 * @faqu_n: For the new value
 */
void faqu_addnode(stack_t **faqu_head, int faqu_n)
{
	stack_t *faqu_new_node, *faqu_aux;

	faqu_aux = *faqu_head;
	faqu_new_node = malloc(sizeof(stack_t));
	if (faqu_new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (faqu_aux)
		faqu_aux->prev = faqu_new_node;
	faqu_new_node->n = faqu_n;
	faqu_new_node->next = *faqu_head;
	faqu_new_node->prev = NULL;
	*faqu_head = faqu_new_node;
}
