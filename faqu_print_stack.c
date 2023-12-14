#include "monty.h"

/**
 * faqu_print_stack - Function for printing all stack values
 * @faqu_line_num: For command line number
 * @faqu_actual_head: For head address
 */
void faqu_print_stack(stack_t **faqu_actual_head, unsigned int faqu_line_num)
{
	stack_t *faqu_temp_node;

	(void)faqu_line_num;

	if (faqu_actual_head != NULL)
	{
		faqu_temp_node = *faqu_actual_head;
		while (faqu_temp_node != NULL)
		{
			printf("%d\n", faqu_temp_node->n);
			faqu_temp_node = faqu_temp_node->next;
		}
	}
}

