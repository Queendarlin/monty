#include "monty.h"

/**
 * faqu_div_stack - Function for dividing second top by the top element
 * @faqu_line_num: For command line number
 * @faqu_actual_head: For head address
 */

void faqu_div_stack(stack_t **faqu_actual_head, unsigned int faqu_line_num)
{
	stack_t *faqu_temp_node = *faqu_actual_head;
	int faqu_count = 0;
	int faqu_temp_val = 0;

	while (faqu_temp_node)
	{
		faqu_temp_node = faqu_temp_node->next;
		faqu_count++;
	}
	if (faqu_count >= 2)
	{
		faqu_temp_node = *faqu_actual_head;
		if (faqu_temp_node->n == 0)
			faqu_error_handler2(12, faqu_line_num);
		faqu_temp_val = faqu_temp_node->next->n / faqu_temp_node->n;
		faqu_temp_node->next->n = faqu_temp_val;
		faqu_pop_stack(faqu_actual_head, faqu_line_num);
	}
	else
		faqu_error_handler2(11, faqu_line_num);
}
