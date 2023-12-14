#include "monty.h"

/**
 * faqu_rotate_top - Function for rotating the stack to the top.
 * @faqu_actual_head: for the list head
 * @faqu_line_num: For command line number
 */

void faqu_rotate_top(stack_t **faqu_actual_head, unsigned int faqu_line_num)
{
	stack_t *faqu_temp_node;
	int faqu_temp_val = 0, faqu_count = 0;

	(void)faqu_line_num;
	faqu_temp_node = *faqu_actual_head;
	while (faqu_temp_node)
	{
		faqu_temp_node = faqu_temp_node->next;
		faqu_count++;
	}
	faqu_temp_node = *faqu_actual_head;
	if (faqu_count > 1)
	{
		faqu_temp_val = faqu_temp_node->n;
		while (faqu_temp_node->next)
		{
			faqu_temp_node->n = faqu_temp_node->next->n;
			faqu_temp_node = faqu_temp_node->next;
		}
		faqu_temp_node->n = faqu_temp_val;
	}
}
