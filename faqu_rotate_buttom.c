#include "monty.h"

/**
 * faqu_rotate_bottom - function for rotating the stack from bottom
 * @faqu_actual_head: For the head of the list
 * @faqu_line_num: For the Line number command
 *
 */

void faqu_rotate_bottom(stack_t **faqu_actual_head, unsigned int faqu_line_num)
{
	stack_t *faqu_temp_node;
	int faqu_temp_val = 0, faqu_temp_val_n = 0, faqu_count = 0;

	(void)faqu_line_num;
	faqu_temp_node = *faqu_actual_head;
	while (faqu_temp_node)
	{
		faqu_temp_val = faqu_temp_node->n;
		faqu_temp_node = faqu_temp_node->next;
		faqu_count++;
	}
	faqu_temp_node = *faqu_actual_head;
	if (faqu_count > 1)
	{
		while (faqu_temp_node->next)
		{
			faqu_temp_val_n = faqu_temp_node->n;
			faqu_temp_node->n = faqu_temp_val;
			faqu_temp_val = faqu_temp_val_n;
			faqu_temp_node = faqu_temp_node->next;
		}
		faqu_temp_node->n = faqu_temp_val;
	}
}

